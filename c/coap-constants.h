
// IANA CoAP Headers
// Source: https://github.com/mofosyne/iana-headers

#define COAP_CODE(CLASS, SUBCLASS) ((((CLASS)&0x07U)<<5)|((SUBCLASS)&0x1FU))
#define COAP_GET_CODE_CLASS(CODE) (((CODE)>>5U)&0x07U)
#define COAP_GET_CODE_SUBCLASS(CODE) ((CODE)&0x1FU)

typedef enum {
  /* Autogenerated IANA CoAP Request/Response
     Request Source: https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#method-codes
     Response Source: https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#response-codes
     Signaling Source: https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#signaling-codes
     */
  // code: 0.01; Method: GET; Ref: [RFC7252]
  COAP_CODE_0_01_GET = 1,
  // code: 0.02; Method: POST; Ref: [RFC7252]
  COAP_CODE_0_02_POST = 2,
  // code: 0.03; Method: PUT; Ref: [RFC7252]
  COAP_CODE_0_03_PUT = 3,
  // code: 0.04; Method: DELETE; Ref: [RFC7252]
  COAP_CODE_0_04_DELETE = 4,
  // code: 0.05; Method: FETCH; Ref: [RFC8132]
  COAP_CODE_0_05_FETCH = 5,
  // code: 0.06; Method: PATCH; Ref: [RFC8132]
  COAP_CODE_0_06_PATCH = 6,
  // code: 0.07; Method: iPATCH; Ref: [RFC8132]
  COAP_CODE_0_07_IPATCH = 7,
  // code: 2.01; Success: Created; Ref: [RFC7252]
  COAP_CODE_2_01_CREATED = 65,
  // code: 2.02; Success: Deleted; Ref: [RFC7252]
  COAP_CODE_2_02_DELETED = 66,
  // code: 2.03; Success: Valid; Ref: [RFC7252]
  COAP_CODE_2_03_VALID = 67,
  // code: 2.04; Success: Changed; Ref: [RFC7252]
  COAP_CODE_2_04_CHANGED = 68,
  // code: 2.05; Success: Content; Ref: [RFC7252]
  COAP_CODE_2_05_CONTENT = 69,
  // code: 2.31; Success: Continue; Ref: [RFC7959]
  COAP_CODE_2_31_CONTINUE = 95,
  // code: 4.00; Client Error: Bad Request; Ref: [RFC7252]
  COAP_CODE_4_00_BAD_REQUEST = 128,
  // code: 4.01; Client Error: Unauthorized; Ref: [RFC7252]
  COAP_CODE_4_01_UNAUTHORIZED = 129,
  // code: 4.02; Client Error: Bad Option; Ref: [RFC7252]
  COAP_CODE_4_02_BAD_OPTION = 130,
  // code: 4.03; Client Error: Forbidden; Ref: [RFC7252]
  COAP_CODE_4_03_FORBIDDEN = 131,
  // code: 4.04; Client Error: Not Found; Ref: [RFC7252]
  COAP_CODE_4_04_NOT_FOUND = 132,
  // code: 4.05; Client Error: Method Not Allowed; Ref: [RFC7252]
  COAP_CODE_4_05_METHOD_NOT_ALLOWED = 133,
  // code: 4.06; Client Error: Not Acceptable; Ref: [RFC7252]
  COAP_CODE_4_06_NOT_ACCEPTABLE = 134,
  // code: 4.08; Client Error: Request Entity Incomplete; Ref: [RFC7959]
  COAP_CODE_4_08_REQUEST_ENTITY_INCOMPLETE = 136,
  // code: 4.09; Client Error: Conflict; Ref: [RFC8132]
  COAP_CODE_4_09_CONFLICT = 137,
  // code: 4.12; Client Error: Precondition Failed; Ref: [RFC7252]
  COAP_CODE_4_12_PRECONDITION_FAILED = 140,
  // code: 4.13; Client Error: Request Entity Too Large; Ref: [RFC7252][RFC7959]
  COAP_CODE_4_13_REQUEST_ENTITY_TOO_LARGE = 141,
  // code: 4.15; Client Error: Unsupported Content-Format; Ref: [RFC7252]
  COAP_CODE_4_15_UNSUPPORTED_CONTENT_FORMAT = 143,
  // code: 4.22; Client Error: Unprocessable Entity; Ref: [RFC8132]
  COAP_CODE_4_22_UNPROCESSABLE_ENTITY = 150,
  // code: 4.29; Client Error: Too Many Requests; Ref: [RFC8516]
  COAP_CODE_4_29_TOO_MANY_REQUESTS = 157,
  // code: 5.00; Server Error: Internal Server Error; Ref: [RFC7252]
  COAP_CODE_5_00_INTERNAL_SERVER_ERROR = 160,
  // code: 5.01; Server Error: Not Implemented; Ref: [RFC7252]
  COAP_CODE_5_01_NOT_IMPLEMENTED = 161,
  // code: 5.02; Server Error: Bad Gateway; Ref: [RFC7252]
  COAP_CODE_5_02_BAD_GATEWAY = 162,
  // code: 5.03; Server Error: Service Unavailable; Ref: [RFC7252]
  COAP_CODE_5_03_SERVICE_UNAVAILABLE = 163,
  // code: 5.04; Server Error: Gateway Timeout; Ref: [RFC7252]
  COAP_CODE_5_04_GATEWAY_TIMEOUT = 164,
  // code: 5.05; Server Error: Proxying Not Supported; Ref: [RFC7252]
  COAP_CODE_5_05_PROXYING_NOT_SUPPORTED = 165,
  // code: 5.08; Server Error: Hop Limit Reached; Ref: [RFC8768]
  COAP_CODE_5_08_HOP_LIMIT_REACHED = 168,
  // code: 7.01; Signaling Code: CSM; Ref: [RFC8323]
  COAP_CODE_7_01_CSM = 225,
  // code: 7.02; Signaling Code: Ping; Ref: [RFC8323]
  COAP_CODE_7_02_PING = 226,
  // code: 7.03; Signaling Code: Pong; Ref: [RFC8323]
  COAP_CODE_7_03_PONG = 227,
  // code: 7.04; Signaling Code: Release; Ref: [RFC8323]
  COAP_CODE_7_04_RELEASE = 228,
  // code: 7.05; Signaling Code: Abort; Ref: [RFC8323]
  COAP_CODE_7_05_ABORT = 229
} coap_code_t;

typedef enum {
  /* Autogenerated IANA CoAP Content-Formats (Source: https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#option-numbers) */
  // If-Match; Ref: [RFC7252][RFC8613]
  COAP_OPTION_IF_MATCH = 1,
  // Uri-Host; Ref: [RFC7252][RFC8613]
  COAP_OPTION_URI_HOST = 3,
  // ETag; Ref: [RFC7252][RFC8613]
  COAP_OPTION_ETAG = 4,
  // If-None-Match; Ref: [RFC7252][RFC8613]
  COAP_OPTION_IF_NONE_MATCH = 5,
  // Observe; Ref: [RFC7641][RFC8613]
  COAP_OPTION_OBSERVE = 6,
  // Uri-Port; Ref: [RFC7252][RFC8613]
  COAP_OPTION_URI_PORT = 7,
  // Location-Path; Ref: [RFC7252][RFC8613]
  COAP_OPTION_LOCATION_PATH = 8,
  // OSCORE; Ref: [RFC8613]
  COAP_OPTION_OSCORE = 9,
  // Uri-Path; Ref: [RFC7252][RFC8613]
  COAP_OPTION_URI_PATH = 11,
  // Content-Format; Ref: [RFC7252][RFC8613]
  COAP_OPTION_CONTENT_FORMAT = 12,
  // Max-Age; Ref: [RFC7252][RFC8516][RFC8613]
  COAP_OPTION_MAX_AGE = 14,
  // Uri-Query; Ref: [RFC7252][RFC8613]
  COAP_OPTION_URI_QUERY = 15,
  // Hop-Limit; Ref: [RFC8768]
  COAP_OPTION_HOP_LIMIT = 16,
  // Accept; Ref: [RFC7252][RFC8613]
  COAP_OPTION_ACCEPT = 17,
  // Q-Block1; Ref: [RFC9177]
  COAP_OPTION_Q_BLOCK1 = 19,
  // Location-Query; Ref: [RFC7252][RFC8613]
  COAP_OPTION_LOCATION_QUERY = 20,
  // EDHOC (TEMPORARY - registered 2021-11-08, extension registered 2022-10-19, expires 2023-11-08); Ref: [draft-ietf-core-oscore-edhoc-02]
  COAP_OPTION_EDHOC = 21,
  // Block2; Ref: [RFC7959][RFC8323][RFC8613]
  COAP_OPTION_BLOCK2 = 23,
  // Block1; Ref: [RFC7959][RFC8323][RFC8613]
  COAP_OPTION_BLOCK1 = 27,
  // Size2; Ref: [RFC7959][RFC8613]
  COAP_OPTION_SIZE2 = 28,
  // Q-Block2; Ref: [RFC9177]
  COAP_OPTION_Q_BLOCK2 = 31,
  // Proxy-Uri; Ref: [RFC7252][RFC8613]
  COAP_OPTION_PROXY_URI = 35,
  // Proxy-Scheme; Ref: [RFC7252][RFC8613]
  COAP_OPTION_PROXY_SCHEME = 39,
  // Size1; Ref: [RFC7252][RFC8613]
  COAP_OPTION_SIZE1 = 60,
  // Echo; Ref: [RFC9175]
  COAP_OPTION_ECHO = 252,
  // No-Response; Ref: [RFC7967][RFC8613]
  COAP_OPTION_NO_RESPONSE = 258,
  // Request-Tag; Ref: [RFC9175]
  COAP_OPTION_REQUEST_TAG = 292,
  // OCF-Accept-Content-Format-Version; Ref: [Michael_Koster]
  COAP_OPTION_OCF_ACCEPT_CONTENT_FORMAT_VERSION = 2049,
  // OCF-Content-Format-Version; Ref: [Michael_Koster]
  COAP_OPTION_OCF_CONTENT_FORMAT_VERSION = 2053
} coap_option_t;

typedef enum {
  /* Autogenerated IANA CoAP Content-Formats (Source: https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#content-formats) */
  // text/plain; charset=utf-8; Ref: [RFC2046][RFC3676][RFC5147]
  COAP_CONTENT_FORMAT_TEXT_PLAIN_UTF_8 = 0,
  // application/cose; cose-type="cose-encrypt0"; Ref: [RFC9052]
  COAP_CONTENT_FORMAT_APPLICATION_COSE_ENCRYPT0 = 16,
  // application/cose; cose-type="cose-mac0"; Ref: [RFC9052]
  COAP_CONTENT_FORMAT_APPLICATION_COSE_MAC0 = 17,
  // application/cose; cose-type="cose-sign1"; Ref: [RFC9052]
  COAP_CONTENT_FORMAT_APPLICATION_COSE_SIGN1 = 18,
  // application/ace+cbor; Ref: [RFC9200]
  COAP_CONTENT_FORMAT_APPLICATION_ACE_PLUS_CBOR = 19,
  // image/gif; Ref: [https://www.w3.org/Graphics/GIF/spec-gif89a.txt]
  COAP_CONTENT_FORMAT_IMAGE_GIF = 21,
  // image/jpeg; Ref: [ISO/IEC 10918-5]
  COAP_CONTENT_FORMAT_IMAGE_JPEG = 22,
  // image/png; Ref: [RFC2083]
  COAP_CONTENT_FORMAT_IMAGE_PNG = 23,
  // application/link-format; Ref: [RFC6690]
  COAP_CONTENT_FORMAT_APPLICATION_LINK_FORMAT = 40,
  // application/xml; Ref: [RFC3023]
  COAP_CONTENT_FORMAT_APPLICATION_XML = 41,
  // application/octet-stream; Ref: [RFC2045][RFC2046]
  COAP_CONTENT_FORMAT_APPLICATION_OCTET_STREAM = 42,
  // application/exi; Ref: ["Efficient XML Interchange (EXI) Format 1.0 (Second Edition)", February 2014]
  COAP_CONTENT_FORMAT_APPLICATION_EXI = 47,
  // application/json; Ref: [RFC8259]
  COAP_CONTENT_FORMAT_APPLICATION_JSON = 50,
  // application/json-patch+json; Ref: [RFC6902]
  COAP_CONTENT_FORMAT_APPLICATION_JSON_PATCH_PLUS_JSON = 51,
  // application/merge-patch+json; Ref: [RFC7396]
  COAP_CONTENT_FORMAT_APPLICATION_MERGE_PATCH_PLUS_JSON = 52,
  // application/cbor; Ref: [RFC8949]
  COAP_CONTENT_FORMAT_APPLICATION_CBOR = 60,
  // application/cwt; Ref: [RFC8392]
  COAP_CONTENT_FORMAT_APPLICATION_CWT = 61,
  // application/multipart-core; Ref: [RFC8710]
  COAP_CONTENT_FORMAT_APPLICATION_MULTIPART_CORE = 62,
  // application/cbor-seq; Ref: [RFC8742]
  COAP_CONTENT_FORMAT_APPLICATION_CBOR_SEQ = 63,
  // application/edhoc+cbor-seq; Ref: [RFC-ietf-lake-edhoc-22]
  COAP_CONTENT_FORMAT_APPLICATION_EDHOC_PLUS_CBOR_SEQ = 64,
  // application/cid-edhoc+cbor-seq; Ref: [RFC-ietf-lake-edhoc-22]
  COAP_CONTENT_FORMAT_APPLICATION_CID_EDHOC_PLUS_CBOR_SEQ = 65,
  // application/cose; cose-type="cose-encrypt"; Ref: [RFC9052]
  COAP_CONTENT_FORMAT_APPLICATION_COSE_ENCRYPT = 96,
  // application/cose; cose-type="cose-mac"; Ref: [RFC9052]
  COAP_CONTENT_FORMAT_APPLICATION_COSE_MAC = 97,
  // application/cose; cose-type="cose-sign"; Ref: [RFC9052]
  COAP_CONTENT_FORMAT_APPLICATION_COSE_SIGN = 98,
  // application/cose-key; Ref: [RFC9052]
  COAP_CONTENT_FORMAT_APPLICATION_COSE_KEY = 101,
  // application/cose-key-set; Ref: [RFC9052]
  COAP_CONTENT_FORMAT_APPLICATION_COSE_KEY_SET = 102,
  // application/senml+json; Ref: [RFC8428]
  COAP_CONTENT_FORMAT_APPLICATION_SENML_PLUS_JSON = 110,
  // application/sensml+json; Ref: [RFC8428]
  COAP_CONTENT_FORMAT_APPLICATION_SENSML_PLUS_JSON = 111,
  // application/senml+cbor; Ref: [RFC8428]
  COAP_CONTENT_FORMAT_APPLICATION_SENML_PLUS_CBOR = 112,
  // application/sensml+cbor; Ref: [RFC8428]
  COAP_CONTENT_FORMAT_APPLICATION_SENSML_PLUS_CBOR = 113,
  // application/senml-exi; Ref: [RFC8428]
  COAP_CONTENT_FORMAT_APPLICATION_SENML_EXI = 114,
  // application/sensml-exi; Ref: [RFC8428]
  COAP_CONTENT_FORMAT_APPLICATION_SENSML_EXI = 115,
  // application/yang-data+cbor; id=sid; Ref: [RFC9254]
  COAP_CONTENT_FORMAT_APPLICATION_YANG_DATA_PLUS_CBOR_SID = 140,
  // application/coap-group+json; Ref: [RFC7390]
  COAP_CONTENT_FORMAT_APPLICATION_COAP_GROUP_PLUS_JSON = 256,
  // application/concise-problem-details+cbor; Ref: [RFC9290]
  COAP_CONTENT_FORMAT_APPLICATION_CONCISE_PROBLEM_DETAILS_PLUS_CBOR = 257,
  // application/swid+cbor; Ref: [RFC9393]
  COAP_CONTENT_FORMAT_APPLICATION_SWID_PLUS_CBOR = 258,
  // application/pkixcmp; Ref: [RFC-ietf-ace-cmpv2-coap-transport-10][RFC4210]
  COAP_CONTENT_FORMAT_APPLICATION_PKIXCMP = 259,
  // application/dots+cbor; Ref: [RFC9132]
  COAP_CONTENT_FORMAT_APPLICATION_DOTS_PLUS_CBOR = 271,
  // application/missing-blocks+cbor-seq; Ref: [RFC9177]
  COAP_CONTENT_FORMAT_APPLICATION_MISSING_BLOCKS_PLUS_CBOR_SEQ = 272,
  // application/pkcs7-mime; smime-type=server-generated-key; Ref: [RFC7030][RFC8551][RFC9148]
  COAP_CONTENT_FORMAT_APPLICATION_PKCS7_MIME_SERVER_GENERATED_KEY = 280,
  // application/pkcs7-mime; smime-type=certs-only; Ref: [RFC8551][RFC9148]
  COAP_CONTENT_FORMAT_APPLICATION_PKCS7_MIME_CERTS_ONLY = 281,
  // application/pkcs8; Ref: [RFC5958][RFC8551][RFC9148]
  COAP_CONTENT_FORMAT_APPLICATION_PKCS8 = 284,
  // application/csrattrs; Ref: [RFC7030][RFC9148]
  COAP_CONTENT_FORMAT_APPLICATION_CSRATTRS = 285,
  // application/pkcs10; Ref: [RFC5967][RFC8551][RFC9148]
  COAP_CONTENT_FORMAT_APPLICATION_PKCS10 = 286,
  // application/pkix-cert; Ref: [RFC2585][RFC9148]
  COAP_CONTENT_FORMAT_APPLICATION_PKIX_CERT = 287,
  // application/aif+cbor; Ref: [RFC9237]
  COAP_CONTENT_FORMAT_APPLICATION_AIF_PLUS_CBOR = 290,
  // application/aif+json; Ref: [RFC9237]
  COAP_CONTENT_FORMAT_APPLICATION_AIF_PLUS_JSON = 291,
  // application/senml+xml; Ref: [RFC8428]
  COAP_CONTENT_FORMAT_APPLICATION_SENML_PLUS_XML = 310,
  // application/sensml+xml; Ref: [RFC8428]
  COAP_CONTENT_FORMAT_APPLICATION_SENSML_PLUS_XML = 311,
  // application/senml-etch+json; Ref: [RFC8790]
  COAP_CONTENT_FORMAT_APPLICATION_SENML_ETCH_PLUS_JSON = 320,
  // application/senml-etch+cbor; Ref: [RFC8790]
  COAP_CONTENT_FORMAT_APPLICATION_SENML_ETCH_PLUS_CBOR = 322,
  // application/yang-data+cbor; Ref: [RFC9254]
  COAP_CONTENT_FORMAT_APPLICATION_YANG_DATA_PLUS_CBOR = 340,
  // application/yang-data+cbor; id=name; Ref: [RFC9254]
  COAP_CONTENT_FORMAT_APPLICATION_YANG_DATA_PLUS_CBOR_NAME = 341,
  // application/td+json; Ref: ["Web of Things (WoT) Thing Description 1.1", April 2022]
  COAP_CONTENT_FORMAT_APPLICATION_TD_PLUS_JSON = 432,
  // application/tm+json; Ref: ["Web of Things (WoT) Thing Description 1.1", April 2022]
  COAP_CONTENT_FORMAT_APPLICATION_TM_PLUS_JSON = 433,
  // application/voucher-cose+cbor (TEMPORARY - registered 2022-04-12, extension registered 2023-04-04, expires 2024-04-12); Ref: [draft-ietf-anima-constrained-voucher-20]
  COAP_CONTENT_FORMAT_APPLICATION_VOUCHER_COSE_PLUS_CBOR = 836,
  // application/vnd.ocf+cbor; Ref: [Michael_Koster]
  COAP_CONTENT_FORMAT_APPLICATION_VND_OCF_PLUS_CBOR = 10000,
  // application/oscore; Ref: [RFC8613]
  COAP_CONTENT_FORMAT_APPLICATION_OSCORE = 10001,
  // application/javascript; Ref: [RFC4329]
  COAP_CONTENT_FORMAT_APPLICATION_JAVASCRIPT = 10002,
  // application/json; deflate; Ref: [RFC8259][RFC9110, Section 8.4.1.2]
  COAP_CONTENT_FORMAT_APPLICATION_JSON_DEFLATE = 11050,
  // application/cbor; deflate; Ref: [RFC8949][RFC9110, Section 8.4.1.2]
  COAP_CONTENT_FORMAT_APPLICATION_CBOR_DEFLATE = 11060,
  // application/vnd.oma.lwm2m+tlv; Ref: [OMA-TS-LightweightM2M-V1_0]
  COAP_CONTENT_FORMAT_APPLICATION_VND_OMA_LWM2M_PLUS_TLV = 11542,
  // application/vnd.oma.lwm2m+json; Ref: [OMA-TS-LightweightM2M-V1_0]
  COAP_CONTENT_FORMAT_APPLICATION_VND_OMA_LWM2M_PLUS_JSON = 11543,
  // application/vnd.oma.lwm2m+cbor; Ref: [OMA-TS-LightweightM2M-V1_2]
  COAP_CONTENT_FORMAT_APPLICATION_VND_OMA_LWM2M_PLUS_CBOR = 11544,
  // text/css; Ref: [RFC2318]
  COAP_CONTENT_FORMAT_TEXT_CSS = 20000,
  // image/svg+xml; Ref: [https://www.w3.org/TR/SVG/mimereg.html]
  COAP_CONTENT_FORMAT_IMAGE_SVG_PLUS_XML = 30000
} coap_content_format_t;

typedef enum {
  /* Autogenerated IANA CoAP Option Numbers for 7.01 (Source: https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#signaling-option-numbers) */
  // Max-Message-Size; Ref: [RFC8323]
  COAP_CODE_7_01_OPTION_NUMBER_MAX_MESSAGE_SIZE = 2,
  // Block-Wise-Transfer; Ref: [RFC8323]
  COAP_CODE_7_01_OPTION_NUMBER_BLOCK_WISE_TRANSFER = 4,
  // Extended-Token-Length; Ref: [RFC8974]
  COAP_CODE_7_01_OPTION_NUMBER_EXTENDED_TOKEN_LENGTH = 6,
  // OSCORE; Ref: [RFC8613]
  COAP_CODE_7_01_OPTION_NUMBER_OSCORE = 9
} coap_code_7_01_option_number_t;

typedef enum {
  /* Autogenerated IANA CoAP Option Numbers for 7.02 (Source: https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#signaling-option-numbers) */
  // Custody; Ref: [RFC8323]
  COAP_CODE_7_02_OPTION_NUMBER_CUSTODY = 2,
  // OSCORE; Ref: [RFC8613]
  COAP_CODE_7_02_OPTION_NUMBER_OSCORE = 9
} coap_code_7_02_option_number_t;

typedef enum {
  /* Autogenerated IANA CoAP Option Numbers for 7.03 (Source: https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#signaling-option-numbers) */
  // Custody; Ref: [RFC8323]
  COAP_CODE_7_03_OPTION_NUMBER_CUSTODY = 2,
  // OSCORE; Ref: [RFC8613]
  COAP_CODE_7_03_OPTION_NUMBER_OSCORE = 9
} coap_code_7_03_option_number_t;

typedef enum {
  /* Autogenerated IANA CoAP Option Numbers for 7.04 (Source: https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#signaling-option-numbers) */
  // Alternative-Address; Ref: [RFC8323]
  COAP_CODE_7_04_OPTION_NUMBER_ALTERNATIVE_ADDRESS = 2,
  // Hold-Off; Ref: [RFC8323]
  COAP_CODE_7_04_OPTION_NUMBER_HOLD_OFF = 4,
  // OSCORE; Ref: [RFC8613]
  COAP_CODE_7_04_OPTION_NUMBER_OSCORE = 9
} coap_code_7_04_option_number_t;

typedef enum {
  /* Autogenerated IANA CoAP Option Numbers for 7.05 (Source: https://www.iana.org/assignments/core-parameters/core-parameters.xhtml#signaling-option-numbers) */
  // Bad-CSM-Option; Ref: [RFC8323]
  COAP_CODE_7_05_OPTION_NUMBER_BAD_CSM_OPTION = 2,
  // OSCORE; Ref: [RFC8613]
  COAP_CODE_7_05_OPTION_NUMBER_OSCORE = 9
} coap_code_7_05_option_number_t;

