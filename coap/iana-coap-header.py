#!/usr/bin/python3
import requests
import csv
import os
import re
import email, time

spacing_string = "  "

iana_coap_c_header_file_path = './c/coap-constants.h'

iana_coap_request_response_settings = {
   "name"                : "IANA CoAP Request/Response",
   "request_cache_file"  : "./coap/cache/method-codes.csv",
   "request_csv_url"     : "https://www.iana.org/assignments/core-parameters/method-codes.csv",
   "request_source"      : "https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#method-codes",
   "response_cache_file" : "./coap/cache/response-codes.csv",
   "response_csv_url"    : "https://www.iana.org/assignments/core-parameters/response-codes.csv",
   "response_source"     : "https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#response-codes",
   "c_typedef_name"      : "coap_code_t",
}

iana_coap_content_format_settings = {
   "name"           : "IANA CoAP Content-Formats",
   "cache_file"     : "./coap/cache/content_formats.csv",
   "csv_url"        : "https://www.iana.org/assignments/core-parameters/content-formats.csv",
   "source"         : "https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#content-formats",
   "c_typedef_name" : "coap_content_format_t",
}

default_coap_header_c = """
#define COAP_CODE(CLASS, SUBCLASS) ((((CLASS)&0x07U)<<5)|((SUBCLASS)&0x1FU))
#define COAP_GET_CODE_CLASS(CODE) (((CODE)>>5U)&0x07U)
#define COAP_GET_CODE_SUBCLASS(CODE) ((CODE)&0x1FU)
typedef enum {
} coap_code_t;

typedef enum {
} coap_option_number_t;

typedef enum {
} coap_content_format_t;

typedef enum {
} coap_signaling_code_t;

typedef enum {
} coap_signaling_option_t;
"""

###############################################################################
# Download Handler

def download_csv(csv_url: str, cache_file: str):
    response = requests.get(csv_url)
    if response.status_code != 200:
        raise Exception(f"Failed to fetch CSV content from {csv_url}")
    csv_content = response.text
    with open(cache_file, "w", encoding="utf-8") as file:
        file.write(csv_content)
    return csv_content

def read_or_download_csv(csv_url: str, cache_file: str):
    """
    Load latest IANA registrations
    """
    if os.path.exists(cache_file):
        # Cache file already exist. Check if outdated
        response = requests.head(csv_url)
        if 'last-modified' in response.headers:
            remote_last_modified = response.headers['last-modified']
            remote_timestamp = time.mktime(email.utils.parsedate_to_datetime(remote_last_modified).timetuple())
            cached_timestamp = os.path.getmtime(cache_file)
            print(f"remote last modified: {remote_timestamp}")
            print(f"cached last modified: {cached_timestamp}")
            if remote_timestamp <= cached_timestamp:
                # No change detected. Use cached file
                with open(cache_file, "r", encoding="utf-8") as file:
                    csv_content = file.read()
                print("Using cache...")
                return csv_content
            print("Outdated cache...")
        else:
            print("cannot find last modified date time...")
    else:
        print("cache file not found...")

    print(f"Downloading CSV file... ({csv_url}, {cache_file})")
    return download_csv(csv_url, cache_file)


###############################################################################
# C Code Generation Utilities

def extract_enum_values_from_c_code(c_code: str, typedef_enum_name: str) -> str:
    match = re.search(fr'typedef enum \{{([^}}]*)\}} {typedef_enum_name};', c_code, flags=re.DOTALL)
    if not match:
        return {}

    enum_values = {}
    enum_content = match.group(1)
    matches = re.findall(r'(\w+)\s*=\s*(\d+)', enum_content)

    for match in matches:
        enum_name, enum_value = match
        enum_values[int(enum_value)] = enum_name

    return enum_values

def generate_c_enum_content(head_comment, c_enum_list):
    c_enum_content = head_comment
    for id_value, row in sorted(c_enum_list.items()):
        if row["comment"]:
            c_enum_content += spacing_string + f'// {row.get("comment", "")}\n'
        c_enum_content += spacing_string + f'{row.get("c_enum_name", "")} = {id_value}' + (',\n' if id_value != sorted(c_enum_list)[-1] else '')
    return c_enum_content

def search_and_replace_c_typedef_enum(document_content, typename, c_enum_content):
    # Search and replace
    pattern = fr'typedef enum \{{([^}}]*)\}} {typename};'
    replacement = f'typedef enum {{\n{c_enum_content}\n}} {typename};'
    updated_document_content = re.sub(pattern, replacement, document_content, flags=re.DOTALL)
    return updated_document_content

def override_enum_from_existing_typedef_enum(header_file_content, coap_content_format, c_typedef_name: str):
    """
    Check for existing enum so we do not break it
    """
    existing_enum_name = extract_enum_values_from_c_code(header_file_content, c_typedef_name)
    for id_value, row in sorted(existing_enum_name.items()):
        if id_value in coap_content_format: # Override
            coap_content_format[id_value]["c_enum_name"] = existing_enum_name[id_value]
        else: # Add
            coap_content_format[id_value] = {"c_enum_name" : existing_enum_name[id_value]}
    return coap_content_format

###############################################################################
# request response Generation
def iana_coap_code_class_subclass_to_integer(coap_class, coap_subclass):
    return ((((coap_class)&0x07)<<5)|((coap_subclass)&0x1F))

def iana_coap_class_to_str(coap_class):
    if coap_class == 0:
        return "Method"
    if coap_class == 2:
        return "Success"
    if coap_class == 4:
        return "Client Error"
    if coap_class == 5:
        return "Server Error"
    if coap_class == 7:
        return "Signaling Code"
    return "?"

def iana_coap_request_response_c_enum_name_generate(code: str, description: str):
    """
    This generates a c enum name based on coap content type and content coding value
    """
    # Do not include comments indicated by messages within `(...)`
    description = re.sub(r'\s+\(.*\)', '', description).strip(' ')
    c_enum_name = f"COAP_CODE_{code}_{description}"
    # Convert non alphanumeric characters into variable name friendly underscore
    c_enum_name = re.sub(r'[^a-zA-Z0-9_]', '_', c_enum_name)
    c_enum_name = c_enum_name.strip('_')
    c_enum_name = c_enum_name.upper()
    return c_enum_name

def iana_coap_request_response_parse_csv(csv_content: str):
    csv_lines = csv_content.strip().split('\n')
    csv_reader = csv.reader(csv_lines)
    coap_request_response_format = {}
    for row in csv_reader:
        code, description, reference = map(str.strip, row)
        if code.lower() == "code": # Skip first header
            continue
        if not code or description.lower() == "unassigned":
            continue
        if "-" in code: # usually indicates an unassigned or reserved range
            continue

        # Extract coap class and subclass
        coap_code_splitted_str = code.split('.')
        coap_class = int(coap_code_splitted_str[0])
        coap_subclass = int(coap_code_splitted_str[1])
        coap_code = iana_coap_code_class_subclass_to_integer(coap_class, coap_subclass)

        # record enum list
        coap_request_response_format[coap_code] = {
                "c_enum_name": iana_coap_request_response_c_enum_name_generate(code, description),
                "description": description,
                "reference": reference,
                "coap_code_full": code,
                "coap_class": coap_class,
                "coap_subclass": coap_subclass
            }
    return coap_request_response_format

def iana_coap_request_response_list_to_c_enum_list(coap_content_format):
    c_enum_list = {}
    for id_value, row in sorted(coap_content_format.items()):
        # Extract Fields
        c_enum_name = row.get("c_enum_name", None)
        coap_class = row.get("coap_class", None)
        coap_code_full = row.get("coap_code_full", None)
        coap_subclass = row.get("coap_subclass", None)
        description = row.get("description", None)
        reference = row.get("reference", None)
        # Render C header entry
        c_comment_line = None
        if description:
            c_comment_line = '; '.join(filter(None, [f"code: {coap_code_full}", f"{iana_coap_class_to_str(coap_class)}: {description}",  f'Ref: {reference}']))
        # Add to enum list
        c_enum_list[id_value] = {"c_enum_name": c_enum_name, "comment": c_comment_line}
    return c_enum_list

def iana_coap_request_response_c_typedef_enum_update(header_file_content: str) -> str:
    c_typedef_name = iana_coap_request_response_settings["c_typedef_name"]
    c_enum_content = ""

    # Generate head comment
    source_name = iana_coap_request_response_settings["name"]
    request_source_url = iana_coap_request_response_settings["request_source"]
    response_source_url = iana_coap_request_response_settings["response_source"]
    c_enum_content += spacing_string + f"/* Autogenerated {source_name} (Source: {request_source_url} &  {response_source_url}) */\n"

    # Load latest IANA registrations
    coap_request_format = iana_coap_request_response_parse_csv(read_or_download_csv(iana_coap_request_response_settings["request_csv_url"], iana_coap_request_response_settings["request_cache_file"]))
    coap_response_format = iana_coap_request_response_parse_csv(read_or_download_csv(iana_coap_request_response_settings["response_csv_url"], iana_coap_request_response_settings["response_cache_file"]))

    # Parse and process IANA registration into enums
    coap_request_response_format = coap_request_format | coap_response_format

    # Check for existing enum so we do not break it
    coap_request_response_format = override_enum_from_existing_typedef_enum(header_file_content, coap_request_response_format, c_typedef_name)

    # Format to enum name, value and list
    c_enum_list = iana_coap_request_response_list_to_c_enum_list(coap_request_response_format)

    # Generate enumeration header content
    c_enum_content = generate_c_enum_content(c_enum_content, c_enum_list)

    # Search for coap_content_format_t and replace with new content
    return search_and_replace_c_typedef_enum(header_file_content, c_typedef_name, c_enum_content)


###############################################################################
# Content Format Generation
def iana_coap_content_formats_c_enum_name_generate(content_type: str, content_coding: str):
    """
    This generates a c enum name based on coap content type and content coding value
    """
    # Do not include comments indicated by messages within `(...)`
    content_type = re.sub(r'\s+\(.*\)', '', content_type)
    # Specific handling of known extra parameters
    content_type = re.sub(r'([a-zA-Z0-9\-]+)/([a-zA-Z0-9\-\+\.]+); charset=([^"]+)', r'\1_\2_\3', content_type)
    content_type = re.sub(r'([a-zA-Z0-9\-]+)/([a-zA-Z0-9\-\+\.]+); cose-type="cose-([^"]+)"', r'\1_\2_\3', content_type)
    content_type = re.sub(r'([a-zA-Z0-9\-]+)/([a-zA-Z0-9\-\+\.]+); smime-type=([^"]+)', r'\1_\2_\3', content_type)
    content_type = re.sub(r'([a-zA-Z0-9\-]+)/([a-zA-Z0-9\-\+\.]+); id=([^"]+)', r'\1_\2_\3', content_type)
    # General handling of unknown parameters
    content_type = re.sub(r'([a-zA-Z0-9\-]+)/([a-zA-Z0-9\-\+\.]+); [a-zA-Z0-9\-]+="([^"]+)"', r'\1_\2_\3', content_type)
    content_type = re.sub(r'([a-zA-Z0-9\-]+)/([a-zA-Z0-9\-\+\.]+); [a-zA-Z0-9\-]+=([^"]+)', r'\1_\2_\3', content_type)
    if content_coding:
        content_type += "_" + content_coding
    # Convert non alphanumeric characters into variable name friendly underscore
    c_enum_name = re.sub(r'[^a-zA-Z0-9_]', '_', content_type)
    c_enum_name = c_enum_name.strip('_')
    c_enum_name = c_enum_name.upper()
    return c_enum_name

def iana_coap_content_formats_parse_csv(csv_content: str):
    """
    Parse and process IANA registration into enums
    """
    csv_lines = csv_content.strip().split('\n')
    csv_reader = csv.reader(csv_lines)

    coap_content_format = {}
    for row in csv_reader:
        content_type, content_coding, id_value, reference = map(str.strip, row)
        if content_type.lower() == "content type": # Skip first header
            continue
        if not content_type or not id_value or content_type.lower() == "unassigned" or "reserve" in content_type.lower():
            continue
        if "-" in id_value:
            continue
        coap_content_format[int(id_value)] = {
                "c_enum_name": iana_coap_content_formats_c_enum_name_generate(content_type, content_coding),
                "content_type": content_type,
                "content_coding": content_coding,
                "reference": reference
            }
    return coap_content_format

def iana_coap_content_formats_list_to_c_enum_list(coap_content_format):
    c_enum_list = {}
    for id_value, row in sorted(coap_content_format.items()):
        # Extract Fields
        c_enum_name = row.get("c_enum_name", None)
        content_type = row.get("content_type", None)
        content_coding = row.get("content_coding", None)
        reference = row.get("reference", None)
        # Render C header entry
        c_comment_line = None
        if content_type or content_coding or reference:
            c_comment_line = '; '.join(filter(None, [content_type, content_coding, f'Ref: {reference}']))
        # Add to enum list
        c_enum_list[id_value] = {"c_enum_name": c_enum_name, "comment": c_comment_line}
    return c_enum_list

def iana_coap_content_formats_c_typedef_enum_update(header_file_content: str) -> str:
    # Generate head comment
    source_name = iana_coap_content_format_settings["name"]
    source_url = iana_coap_content_format_settings["source"]
    c_head_comment = spacing_string + f"/* Autogenerated {source_name} (Source: {source_url}) */\n"

    # Load latest IANA registrations
    csv_content = read_or_download_csv(iana_coap_content_format_settings["csv_url"], iana_coap_content_format_settings["cache_file"])

    # Parse and process IANA registration into enums
    coap_content_format = iana_coap_content_formats_parse_csv(csv_content)

    # Check for existing enum so we do not break it
    coap_content_format = override_enum_from_existing_typedef_enum(header_file_content, coap_content_format, iana_coap_content_format_settings["c_typedef_name"])

    # Format to enum name, value and list
    c_enum_list = iana_coap_content_formats_list_to_c_enum_list(coap_content_format)

    # Search for coap_content_format_t and replace with new content
    c_typedef_name = iana_coap_content_format_settings["c_typedef_name"]

    # Generate enumeration header content
    c_enum_content = generate_c_enum_content(c_head_comment, c_enum_list)
    return search_and_replace_c_typedef_enum(header_file_content, c_typedef_name, c_enum_content)


###############################################################################
# Create Header

def iana_coap_c_header_update(header_filepath: str):
    # If file doesn't exist yet then write a new file
    if not os.path.exists(header_filepath):
        with open(header_filepath, 'w+') as file:
            file.write(default_coap_header_c)

    # Get latest header content
    with open(header_filepath, 'r') as file:
        header_file_content = file.read()

    # Resync All Values
    header_file_content = iana_coap_content_formats_c_typedef_enum_update(header_file_content)
    header_file_content = iana_coap_request_response_c_typedef_enum_update(header_file_content)

    # Write new header content
    with open(header_filepath, 'w') as file:
        file.write(header_file_content)

    # Indicate header has been synced
    print(f"C header file '{header_filepath}' updated successfully.")

def main():
    iana_coap_c_header_update(iana_coap_c_header_file_path)

if __name__ == "__main__":
    main()
