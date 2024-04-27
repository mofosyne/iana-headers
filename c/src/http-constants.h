
// IANA HTTP Headers
// Source: https://github.com/mofosyne/iana-headers

typedef enum http_status_code_t {
  /* Autogenerated IANA HTTP Status Code (Source: https://www.iana.org/assignments/http-status-codes/http-status-codes.xhtml#http-status-codes-1) */

  /* 100-199 : Informational - Request received, continuing process */
  // Continue; Ref: [RFC9110, Section 15.2.1]
  HTTP_STATUS_CODE_CONTINUE = 100,
  // Switching Protocols; Ref: [RFC9110, Section 15.2.2]
  HTTP_STATUS_CODE_SWITCHING_PROTOCOLS = 101,
  // Processing; Ref: [RFC2518]
  HTTP_STATUS_CODE_PROCESSING = 102,
  // Early Hints; Ref: [RFC8297]
  HTTP_STATUS_CODE_EARLY_HINTS = 103,

  /* 200-299 : Success - The action was successfully received, understood, and accepted */
  // OK; Ref: [RFC9110, Section 15.3.1]
  HTTP_STATUS_CODE_OK = 200,
  // Created; Ref: [RFC9110, Section 15.3.2]
  HTTP_STATUS_CODE_CREATED = 201,
  // Accepted; Ref: [RFC9110, Section 15.3.3]
  HTTP_STATUS_CODE_ACCEPTED = 202,
  // Non-Authoritative Information; Ref: [RFC9110, Section 15.3.4]
  HTTP_STATUS_CODE_NON_AUTHORITATIVE_INFORMATION = 203,
  // No Content; Ref: [RFC9110, Section 15.3.5]
  HTTP_STATUS_CODE_NO_CONTENT = 204,
  // Reset Content; Ref: [RFC9110, Section 15.3.6]
  HTTP_STATUS_CODE_RESET_CONTENT = 205,
  // Partial Content; Ref: [RFC9110, Section 15.3.7]
  HTTP_STATUS_CODE_PARTIAL_CONTENT = 206,
  // Multi-Status; Ref: [RFC4918]
  HTTP_STATUS_CODE_MULTI_STATUS = 207,
  // Already Reported; Ref: [RFC5842]
  HTTP_STATUS_CODE_ALREADY_REPORTED = 208,
  // IM Used; Ref: [RFC3229]
  HTTP_STATUS_CODE_IM_USED = 226,

  /* 300-399 : Redirection - Further action must be taken in order to complete the request */
  // Multiple Choices; Ref: [RFC9110, Section 15.4.1]
  HTTP_STATUS_CODE_MULTIPLE_CHOICES = 300,
  // Moved Permanently; Ref: [RFC9110, Section 15.4.2]
  HTTP_STATUS_CODE_MOVED_PERMANENTLY = 301,
  // Found; Ref: [RFC9110, Section 15.4.3]
  HTTP_STATUS_CODE_FOUND = 302,
  // See Other; Ref: [RFC9110, Section 15.4.4]
  HTTP_STATUS_CODE_SEE_OTHER = 303,
  // Not Modified; Ref: [RFC9110, Section 15.4.5]
  HTTP_STATUS_CODE_NOT_MODIFIED = 304,
  // Use Proxy; Ref: [RFC9110, Section 15.4.6]
  HTTP_STATUS_CODE_USE_PROXY = 305,
  // (Unused); Ref: [RFC9110, Section 15.4.7]
  HTTP_STATUS_CODE__UNUSED = 306,
  // Temporary Redirect; Ref: [RFC9110, Section 15.4.8]
  HTTP_STATUS_CODE_TEMPORARY_REDIRECT = 307,
  // Permanent Redirect; Ref: [RFC9110, Section 15.4.9]
  HTTP_STATUS_CODE_PERMANENT_REDIRECT = 308,

  /* 400-499 : Client Error - The request contains bad syntax or cannot be fulfilled */
  // Bad Request; Ref: [RFC9110, Section 15.5.1]
  HTTP_STATUS_CODE_BAD_REQUEST = 400,
  // Unauthorized; Ref: [RFC9110, Section 15.5.2]
  HTTP_STATUS_CODE_UNAUTHORIZED = 401,
  // Payment Required; Ref: [RFC9110, Section 15.5.3]
  HTTP_STATUS_CODE_PAYMENT_REQUIRED = 402,
  // Forbidden; Ref: [RFC9110, Section 15.5.4]
  HTTP_STATUS_CODE_FORBIDDEN = 403,
  // Not Found; Ref: [RFC9110, Section 15.5.5]
  HTTP_STATUS_CODE_NOT_FOUND = 404,
  // Method Not Allowed; Ref: [RFC9110, Section 15.5.6]
  HTTP_STATUS_CODE_METHOD_NOT_ALLOWED = 405,
  // Not Acceptable; Ref: [RFC9110, Section 15.5.7]
  HTTP_STATUS_CODE_NOT_ACCEPTABLE = 406,
  // Proxy Authentication Required; Ref: [RFC9110, Section 15.5.8]
  HTTP_STATUS_CODE_PROXY_AUTHENTICATION_REQUIRED = 407,
  // Request Timeout; Ref: [RFC9110, Section 15.5.9]
  HTTP_STATUS_CODE_REQUEST_TIMEOUT = 408,
  // Conflict; Ref: [RFC9110, Section 15.5.10]
  HTTP_STATUS_CODE_CONFLICT = 409,
  // Gone; Ref: [RFC9110, Section 15.5.11]
  HTTP_STATUS_CODE_GONE = 410,
  // Length Required; Ref: [RFC9110, Section 15.5.12]
  HTTP_STATUS_CODE_LENGTH_REQUIRED = 411,
  // Precondition Failed; Ref: [RFC9110, Section 15.5.13]
  HTTP_STATUS_CODE_PRECONDITION_FAILED = 412,
  // Content Too Large; Ref: [RFC9110, Section 15.5.14]
  HTTP_STATUS_CODE_CONTENT_TOO_LARGE = 413,
  // URI Too Long; Ref: [RFC9110, Section 15.5.15]
  HTTP_STATUS_CODE_URI_TOO_LONG = 414,
  // Unsupported Media Type; Ref: [RFC9110, Section 15.5.16]
  HTTP_STATUS_CODE_UNSUPPORTED_MEDIA_TYPE = 415,
  // Range Not Satisfiable; Ref: [RFC9110, Section 15.5.17]
  HTTP_STATUS_CODE_RANGE_NOT_SATISFIABLE = 416,
  // Expectation Failed; Ref: [RFC9110, Section 15.5.18]
  HTTP_STATUS_CODE_EXPECTATION_FAILED = 417,
  // (Unused); Ref: [RFC9110, Section 15.5.19]
  HTTP_STATUS_CODE__UNUSED = 418,
  // Misdirected Request; Ref: [RFC9110, Section 15.5.20]
  HTTP_STATUS_CODE_MISDIRECTED_REQUEST = 421,
  // Unprocessable Content; Ref: [RFC9110, Section 15.5.21]
  HTTP_STATUS_CODE_UNPROCESSABLE_CONTENT = 422,
  // Locked; Ref: [RFC4918]
  HTTP_STATUS_CODE_LOCKED = 423,
  // Failed Dependency; Ref: [RFC4918]
  HTTP_STATUS_CODE_FAILED_DEPENDENCY = 424,
  // Too Early; Ref: [RFC8470]
  HTTP_STATUS_CODE_TOO_EARLY = 425,
  // Upgrade Required; Ref: [RFC9110, Section 15.5.22]
  HTTP_STATUS_CODE_UPGRADE_REQUIRED = 426,
  // Precondition Required; Ref: [RFC6585]
  HTTP_STATUS_CODE_PRECONDITION_REQUIRED = 428,
  // Too Many Requests; Ref: [RFC6585]
  HTTP_STATUS_CODE_TOO_MANY_REQUESTS = 429,
  // Request Header Fields Too Large; Ref: [RFC6585]
  HTTP_STATUS_CODE_REQUEST_HEADER_FIELDS_TOO_LARGE = 431,
  // Unavailable For Legal Reasons; Ref: [RFC7725]
  HTTP_STATUS_CODE_UNAVAILABLE_FOR_LEGAL_REASONS = 451,

  /* 500-599 : Server Error - The server failed to fulfill an apparently valid request */
  // Internal Server Error; Ref: [RFC9110, Section 15.6.1]
  HTTP_STATUS_CODE_INTERNAL_SERVER_ERROR = 500,
  // Not Implemented; Ref: [RFC9110, Section 15.6.2]
  HTTP_STATUS_CODE_NOT_IMPLEMENTED = 501,
  // Bad Gateway; Ref: [RFC9110, Section 15.6.3]
  HTTP_STATUS_CODE_BAD_GATEWAY = 502,
  // Service Unavailable; Ref: [RFC9110, Section 15.6.4]
  HTTP_STATUS_CODE_SERVICE_UNAVAILABLE = 503,
  // Gateway Timeout; Ref: [RFC9110, Section 15.6.5]
  HTTP_STATUS_CODE_GATEWAY_TIMEOUT = 504,
  // HTTP Version Not Supported; Ref: [RFC9110, Section 15.6.6]
  HTTP_STATUS_CODE_HTTP_VERSION_NOT_SUPPORTED = 505,
  // Variant Also Negotiates; Ref: [RFC2295]
  HTTP_STATUS_CODE_VARIANT_ALSO_NEGOTIATES = 506,
  // Insufficient Storage; Ref: [RFC4918]
  HTTP_STATUS_CODE_INSUFFICIENT_STORAGE = 507,
  // Loop Detected; Ref: [RFC5842]
  HTTP_STATUS_CODE_LOOP_DETECTED = 508,
  // Not Extended (OBSOLETED); Ref: [RFC2774][status-change-http-experiments-to-historic]
  HTTP_STATUS_CODE_NOT_EXTENDED = 510,
  // Network Authentication Required; Ref: [RFC6585]
  HTTP_STATUS_CODE_NETWORK_AUTHENTICATION_REQUIRED = 511
} http_status_code_t;

/* Start of http_field_name autogenerated section */
/* Autogenerated IANA HTTP Field Name (Source: https://www.iana.org/assignments/http-fields/http-fields.xhtml#field-names) */
#define HTTP_FIELD_NAME "*" // *; permanent; Ref: [RFC9110, Section 12.5.5: HTTP Semantics]
#define HTTP_FIELD_NAME_ACCEPT "Accept" // Accept; permanent; Ref: [RFC9110, Section 12.5.1: HTTP Semantics]
#define HTTP_FIELD_NAME_ACCEPT_ADDITIONS "Accept-Additions" // Accept-Additions; permanent; Ref: [RFC 2324: Hyper Text Coffee Pot Control Protocol (HTCPCP/1.0)]
#define HTTP_FIELD_NAME_ACCEPT_CH "Accept-CH" // Accept-CH; permanent; Ref: [RFC 8942, Section 3.1: HTTP Client Hints]
#define HTTP_FIELD_NAME_ACCEPT_CHARSET "Accept-Charset" // Accept-Charset; deprecated; Ref: [RFC9110, Section 12.5.2: HTTP Semantics]
#define HTTP_FIELD_NAME_ACCEPT_DATETIME "Accept-Datetime" // Accept-Datetime; permanent; Ref: [RFC 7089: HTTP Framework for Time-Based Access to Resource States -- Memento]
#define HTTP_FIELD_NAME_ACCEPT_ENCODING "Accept-Encoding" // Accept-Encoding; permanent; Ref: [RFC9110, Section 12.5.3: HTTP Semantics]
#define HTTP_FIELD_NAME_ACCEPT_FEATURES "Accept-Features" // Accept-Features; permanent; Ref: [RFC 2295: Transparent Content Negotiation in HTTP]
#define HTTP_FIELD_NAME_ACCEPT_LANGUAGE "Accept-Language" // Accept-Language; permanent; Ref: [RFC9110, Section 12.5.4: HTTP Semantics]
#define HTTP_FIELD_NAME_ACCEPT_PATCH "Accept-Patch" // Accept-Patch; permanent; Ref: [RFC 5789: PATCH Method for HTTP]
#define HTTP_FIELD_NAME_ACCEPT_POST "Accept-Post" // Accept-Post; perm/accept-post; permanent; Ref: [Linked Data Platform 1.0]
#define HTTP_FIELD_NAME_ACCEPT_RANGES "Accept-Ranges" // Accept-Ranges; permanent; Ref: [RFC9110, Section 14.3: HTTP Semantics]
#define HTTP_FIELD_NAME_ACCEPT_SIGNATURE "Accept-Signature" // Accept-Signature; permanent; Ref: [RFC 9421, Section 5.1: HTTP Message Signatures]
#define HTTP_FIELD_NAME_ACCESS_CONTROL "Access-Control" // Access-Control; obsoleted; Ref: [Access Control for Cross-site Requests]
#define HTTP_FIELD_NAME_ACCESS_CONTROL_ALLOW_CREDENTIALS "Access-Control-Allow-Credentials" // Access-Control-Allow-Credentials; permanent; Ref: [Fetch]
#define HTTP_FIELD_NAME_ACCESS_CONTROL_ALLOW_HEADERS "Access-Control-Allow-Headers" // Access-Control-Allow-Headers; permanent; Ref: [Fetch]
#define HTTP_FIELD_NAME_ACCESS_CONTROL_ALLOW_METHODS "Access-Control-Allow-Methods" // Access-Control-Allow-Methods; permanent; Ref: [Fetch]
#define HTTP_FIELD_NAME_ACCESS_CONTROL_ALLOW_ORIGIN "Access-Control-Allow-Origin" // Access-Control-Allow-Origin; permanent; Ref: [Fetch]
#define HTTP_FIELD_NAME_ACCESS_CONTROL_EXPOSE_HEADERS "Access-Control-Expose-Headers" // Access-Control-Expose-Headers; permanent; Ref: [Fetch]
#define HTTP_FIELD_NAME_ACCESS_CONTROL_MAX_AGE "Access-Control-Max-Age" // Access-Control-Max-Age; permanent; Ref: [Fetch]
#define HTTP_FIELD_NAME_ACCESS_CONTROL_REQUEST_HEADERS "Access-Control-Request-Headers" // Access-Control-Request-Headers; permanent; Ref: [Fetch]
#define HTTP_FIELD_NAME_ACCESS_CONTROL_REQUEST_METHOD "Access-Control-Request-Method" // Access-Control-Request-Method; permanent; Ref: [Fetch]
#define HTTP_FIELD_NAME_AGE "Age" // Age; permanent; Ref: [RFC9111, Section 5.1: HTTP Caching]
#define HTTP_FIELD_NAME_ALLOW "Allow" // Allow; permanent; Ref: [RFC9110, Section 10.2.1: HTTP Semantics]
#define HTTP_FIELD_NAME_ALPN "ALPN" // ALPN; permanent; Ref: [RFC 7639, Section 2: The ALPN HTTP Header Field]
#define HTTP_FIELD_NAME_ALTERNATES "Alternates" // Alternates; permanent; Ref: [RFC 2295: Transparent Content Negotiation in HTTP]
#define HTTP_FIELD_NAME_ALT_SVC "Alt-Svc" // Alt-Svc; permanent; Ref: [RFC 7838: HTTP Alternative Services]
#define HTTP_FIELD_NAME_ALT_USED "Alt-Used" // Alt-Used; permanent; Ref: [RFC 7838: HTTP Alternative Services]
#define HTTP_FIELD_NAME_AMP_CACHE_TRANSFORM "AMP-Cache-Transform" // AMP-Cache-Transform; provisional; Ref: [AMP-Cache-Transform HTTP request header]
#define HTTP_FIELD_NAME_APPLY_TO_REDIRECT_REF "Apply-To-Redirect-Ref" // Apply-To-Redirect-Ref; permanent; Ref: [RFC 4437: Web Distributed Authoring and Versioning (WebDAV) Redirect Reference Resources]
#define HTTP_FIELD_NAME_AUTHENTICATION_CONTROL "Authentication-Control" // Authentication-Control; permanent; Ref: [RFC 8053, Section 4: HTTP Authentication Extensions for Interactive Clients]
#define HTTP_FIELD_NAME_AUTHENTICATION_INFO "Authentication-Info" // Authentication-Info; permanent; Ref: [RFC9110, Section 11.6.3: HTTP Semantics]
#define HTTP_FIELD_NAME_AUTHORIZATION "Authorization" // Authorization; permanent; Ref: [RFC9110, Section 11.6.2: HTTP Semantics]
#define HTTP_FIELD_NAME_A_IM "A-IM" // A-IM; permanent; Ref: [RFC 3229: Delta encoding in HTTP]
#define HTTP_FIELD_NAME_CACHE_CONTROL "Cache-Control" // Cache-Control; permanent; Ref: [RFC9111, Section 5.2]
#define HTTP_FIELD_NAME_CACHE_STATUS "Cache-Status" // Cache-Status; permanent; Ref: [RFC9211: The Cache-Status HTTP Response Header Field]
#define HTTP_FIELD_NAME_CALDAV_TIMEZONES "CalDAV-Timezones" // CalDAV-Timezones; permanent; Ref: [RFC 7809, Section 7.1: Calendaring Extensions to WebDAV (CalDAV): Time Zones by Reference]
#define HTTP_FIELD_NAME_CAL_MANAGED_ID "Cal-Managed-ID" // Cal-Managed-ID; permanent; Ref: [RFC 8607, Section 5.1: Calendaring Extensions to WebDAV (CalDAV): Managed Attachments]
#define HTTP_FIELD_NAME_CAPSULE_PROTOCOL "Capsule-Protocol" // Capsule-Protocol; permanent; Ref: [RFC9297]
#define HTTP_FIELD_NAME_CDN_CACHE_CONTROL "CDN-Cache-Control" // CDN-Cache-Control; permanent; Ref: [RFC9213: Targeted HTTP Cache Control]
#define HTTP_FIELD_NAME_CDN_LOOP "CDN-Loop" // CDN-Loop; permanent; Ref: [RFC 8586: Loop Detection in Content Delivery Networks (CDNs)]
#define HTTP_FIELD_NAME_CERT_NOT_AFTER "Cert-Not-After" // Cert-Not-After; permanent; Ref: [RFC 8739, Section 3.3: Support for Short-Term, Automatically Renewed (STAR) Certificates in the Automated Certificate Management Environment (ACME)]
#define HTTP_FIELD_NAME_CERT_NOT_BEFORE "Cert-Not-Before" // Cert-Not-Before; permanent; Ref: [RFC 8739, Section 3.3: Support for Short-Term, Automatically Renewed (STAR) Certificates in the Automated Certificate Management Environment (ACME)]
#define HTTP_FIELD_NAME_CLEAR_SITE_DATA "Clear-Site-Data" // Clear-Site-Data; permanent; Ref: [Clear Site Data]
#define HTTP_FIELD_NAME_CLIENT_CERT "Client-Cert" // Client-Cert; permanent; Ref: [RFC9440, Section 2: Client-Cert HTTP Header Field]
#define HTTP_FIELD_NAME_CLIENT_CERT_CHAIN "Client-Cert-Chain" // Client-Cert-Chain; permanent; Ref: [RFC9440, Section 2: Client-Cert HTTP Header Field]
#define HTTP_FIELD_NAME_CLOSE "Close" // Close; permanent; Ref: [RFC9112, Section 9.6: HTTP/1.1]
#define HTTP_FIELD_NAME_CONFIGURATION_CONTEXT "Configuration-Context" // Configuration-Context; provisional; Ref: [OSLC Configuration Management Version 1.0. Part 3: Configuration Specification]
#define HTTP_FIELD_NAME_CONNECTION "Connection" // Connection; permanent; Ref: [RFC9110, Section 7.6.1: HTTP Semantics]
#define HTTP_FIELD_NAME_CONTENT_BASE "Content-Base" // Content-Base; obsoleted; Ref: [RFC 2068: Hypertext Transfer Protocol -- HTTP/1.1][RFC 2616: Hypertext Transfer Protocol -- HTTP/1.1]
#define HTTP_FIELD_NAME_CONTENT_DIGEST "Content-Digest" // Content-Digest; permanent; Ref: [RFC 9530, Section 2: Digest Fields]
#define HTTP_FIELD_NAME_CONTENT_DISPOSITION "Content-Disposition" // Content-Disposition; permanent; Ref: [RFC 6266: Use of the Content-Disposition Header Field in the Hypertext Transfer Protocol (HTTP)]
#define HTTP_FIELD_NAME_CONTENT_ENCODING "Content-Encoding" // Content-Encoding; permanent; Ref: [RFC9110, Section 8.4: HTTP Semantics]
#define HTTP_FIELD_NAME_CONTENT_ID "Content-ID" // Content-ID; deprecated; Ref: [The HTTP Distribution and Replication Protocol]
#define HTTP_FIELD_NAME_CONTENT_LANGUAGE "Content-Language" // Content-Language; permanent; Ref: [RFC9110, Section 8.5: HTTP Semantics]
#define HTTP_FIELD_NAME_CONTENT_LENGTH "Content-Length" // Content-Length; permanent; Ref: [RFC9110, Section 8.6: HTTP Semantics]
#define HTTP_FIELD_NAME_CONTENT_LOCATION "Content-Location" // Content-Location; permanent; Ref: [RFC9110, Section 8.7: HTTP Semantics]
#define HTTP_FIELD_NAME_CONTENT_MD5 "Content-MD5" // Content-MD5; obsoleted; Ref: [RFC 2616, Section 14.15: Hypertext Transfer Protocol -- HTTP/1.1][RFC 7231, Appendix B: Hypertext Transfer Protocol (HTTP/1.1): Semantics and Content]
#define HTTP_FIELD_NAME_CONTENT_RANGE "Content-Range" // Content-Range; permanent; Ref: [RFC9110, Section 14.4: HTTP Semantics]
#define HTTP_FIELD_NAME_CONTENT_SCRIPT_TYPE "Content-Script-Type" // Content-Script-Type; obsoleted; Ref: [HTML 4.01 Specification]
#define HTTP_FIELD_NAME_CONTENT_SECURITY_POLICY "Content-Security-Policy" // Content-Security-Policy; permanent; Ref: [Content Security Policy Level 3]
#define HTTP_FIELD_NAME_CONTENT_SECURITY_POLICY_REPORT_ONLY "Content-Security-Policy-Report-Only" // Content-Security-Policy-Report-Only; permanent; Ref: [Content Security Policy Level 3]
#define HTTP_FIELD_NAME_CONTENT_STYLE_TYPE "Content-Style-Type" // Content-Style-Type; obsoleted; Ref: [HTML 4.01 Specification]
#define HTTP_FIELD_NAME_CONTENT_TYPE "Content-Type" // Content-Type; permanent; Ref: [RFC9110, Section 8.3: HTTP Semantics]
#define HTTP_FIELD_NAME_CONTENT_VERSION "Content-Version" // Content-Version; obsoleted; Ref: [RFC 2068: Hypertext Transfer Protocol -- HTTP/1.1]
#define HTTP_FIELD_NAME_COOKIE "Cookie" // Cookie; permanent; Ref: [RFC 6265: HTTP State Management Mechanism]
#define HTTP_FIELD_NAME_COOKIE2 "Cookie2" // Cookie2; obsoleted; Ref: [RFC 2965: HTTP State Management Mechanism][RFC 6265: HTTP State Management Mechanism]
#define HTTP_FIELD_NAME_CROSS_ORIGIN_EMBEDDER_POLICY "Cross-Origin-Embedder-Policy" // Cross-Origin-Embedder-Policy; permanent; Ref: [HTML]
#define HTTP_FIELD_NAME_CROSS_ORIGIN_EMBEDDER_POLICY_REPORT_ONLY "Cross-Origin-Embedder-Policy-Report-Only" // Cross-Origin-Embedder-Policy-Report-Only; permanent; Ref: [HTML]
#define HTTP_FIELD_NAME_CROSS_ORIGIN_OPENER_POLICY "Cross-Origin-Opener-Policy" // Cross-Origin-Opener-Policy; permanent; Ref: [HTML]
#define HTTP_FIELD_NAME_CROSS_ORIGIN_OPENER_POLICY_REPORT_ONLY "Cross-Origin-Opener-Policy-Report-Only" // Cross-Origin-Opener-Policy-Report-Only; permanent; Ref: [HTML]
#define HTTP_FIELD_NAME_CROSS_ORIGIN_RESOURCE_POLICY "Cross-Origin-Resource-Policy" // Cross-Origin-Resource-Policy; permanent; Ref: [Fetch]
#define HTTP_FIELD_NAME_C_EXT "C-Ext" // C-Ext; obsoleted; Ref: [RFC 2774: An HTTP Extension Framework][status-change-http-experiments-to-historic]
#define HTTP_FIELD_NAME_C_MAN "C-Man" // C-Man; obsoleted; Ref: [RFC 2774: An HTTP Extension Framework][status-change-http-experiments-to-historic]
#define HTTP_FIELD_NAME_C_OPT "C-Opt" // C-Opt; obsoleted; Ref: [RFC 2774: An HTTP Extension Framework][status-change-http-experiments-to-historic]
#define HTTP_FIELD_NAME_C_PEP "C-PEP" // C-PEP; obsoleted; Ref: [PEP - an Extension Mechanism for HTTP][status-change-http-experiments-to-historic]
#define HTTP_FIELD_NAME_C_PEP_INFO "C-PEP-Info" // C-PEP-Info; deprecated; Ref: [PEP - an Extension Mechanism for HTTP][status-change-http-experiments-to-historic]
#define HTTP_FIELD_NAME_DASL "DASL" // DASL; permanent; Ref: [RFC 5323: Web Distributed Authoring and Versioning (WebDAV) SEARCH]
#define HTTP_FIELD_NAME_DATE "Date" // Date; permanent; Ref: [RFC9110, Section 6.6.1: HTTP Semantics]
#define HTTP_FIELD_NAME_DAV "DAV" // DAV; permanent; Ref: [RFC 4918: HTTP Extensions for Web Distributed Authoring and Versioning (WebDAV)]
#define HTTP_FIELD_NAME_DEFAULT_STYLE "Default-Style" // Default-Style; obsoleted; Ref: [HTML 4.01 Specification]
#define HTTP_FIELD_NAME_DELTA_BASE "Delta-Base" // Delta-Base; permanent; Ref: [RFC 3229: Delta encoding in HTTP]
#define HTTP_FIELD_NAME_DEPTH "Depth" // Depth; permanent; Ref: [RFC 4918: HTTP Extensions for Web Distributed Authoring and Versioning (WebDAV)]
#define HTTP_FIELD_NAME_DERIVED_FROM "Derived-From" // Derived-From; obsoleted; Ref: [RFC 2068: Hypertext Transfer Protocol -- HTTP/1.1]
#define HTTP_FIELD_NAME_DESTINATION "Destination" // Destination; permanent; Ref: [RFC 4918: HTTP Extensions for Web Distributed Authoring and Versioning (WebDAV)]
#define HTTP_FIELD_NAME_DIFFERENTIAL_ID "Differential-ID" // Differential-ID; deprecated; Ref: [The HTTP Distribution and Replication Protocol]
#define HTTP_FIELD_NAME_DIGEST "Digest" // Digest; obsoleted; Ref: [RFC 3230: Instance Digests in HTTP][RFC 9530, Section 1.3: Digest Fields]
#define HTTP_FIELD_NAME_DPOP "DPoP" // DPoP; permanent; Ref: [RFC9449: OAuth 2.0 Demonstrating Proof of Possession (DPoP)]
#define HTTP_FIELD_NAME_DPOP_NONCE "DPoP-Nonce" // DPoP-Nonce; permanent; Ref: [RFC9449: OAuth 2.0 Demonstrating Proof of Possession (DPoP)]
#define HTTP_FIELD_NAME_EARLY_DATA "Early-Data" // Early-Data; permanent; Ref: [RFC 8470: Using Early Data in HTTP]
#define HTTP_FIELD_NAME_EDIINT_FEATURES "EDIINT-Features" // EDIINT-Features; provisional; Ref: [RFC 6017: Electronic Data Interchange - Internet Integration (EDIINT) Features Header Field]
#define HTTP_FIELD_NAME_ETAG "ETag" // ETag; permanent; Ref: [RFC9110, Section 8.8.3: HTTP Semantics]
#define HTTP_FIELD_NAME_EXPECT "Expect" // Expect; permanent; Ref: [RFC9110, Section 10.1.1: HTTP Semantics]
#define HTTP_FIELD_NAME_EXPECT_CT "Expect-CT" // Expect-CT; deprecated; Ref: [RFC9163: Expect-CT Extension for HTTP][IESG][HTTPBIS]
#define HTTP_FIELD_NAME_EXPIRES "Expires" // Expires; permanent; Ref: [RFC9111, Section 5.3: HTTP Caching]
#define HTTP_FIELD_NAME_EXT "Ext" // Ext; obsoleted; Ref: [RFC 2774: An HTTP Extension Framework][status-change-http-experiments-to-historic]
#define HTTP_FIELD_NAME_FORWARDED "Forwarded" // Forwarded; permanent; Ref: [RFC 7239: Forwarded HTTP Extension]
#define HTTP_FIELD_NAME_FROM "From" // From; permanent; Ref: [RFC9110, Section 10.1.2: HTTP Semantics]
#define HTTP_FIELD_NAME_GETPROFILE "GetProfile" // GetProfile; obsoleted; Ref: [Implementation of OPS Over HTTP]
#define HTTP_FIELD_NAME_HOBAREG "Hobareg" // Hobareg; permanent; Ref: [RFC 7486, Section 6.1.1: HTTP Origin-Bound Authentication (HOBA)]
#define HTTP_FIELD_NAME_HOST "Host" // Host; permanent; Ref: [RFC9110, Section 7.2: HTTP Semantics]
#define HTTP_FIELD_NAME_HTTP2_SETTINGS "HTTP2-Settings" // HTTP2-Settings; obsoleted; Ref: [RFC 7540, Section 3.2.1: Hypertext Transfer Protocol Version 2 (HTTP/2)]
#define HTTP_FIELD_NAME_IF "If" // If; permanent; Ref: [RFC 4918: HTTP Extensions for Web Distributed Authoring and Versioning (WebDAV)]
#define HTTP_FIELD_NAME_IF_MATCH "If-Match" // If-Match; permanent; Ref: [RFC9110, Section 13.1.1: HTTP Semantics]
#define HTTP_FIELD_NAME_IF_MODIFIED_SINCE "If-Modified-Since" // If-Modified-Since; permanent; Ref: [RFC9110, Section 13.1.3: HTTP Semantics]
#define HTTP_FIELD_NAME_IF_NONE_MATCH "If-None-Match" // If-None-Match; permanent; Ref: [RFC9110, Section 13.1.2: HTTP Semantics]
#define HTTP_FIELD_NAME_IF_RANGE "If-Range" // If-Range; permanent; Ref: [RFC9110, Section 13.1.5: HTTP Semantics]
#define HTTP_FIELD_NAME_IF_SCHEDULE_TAG_MATCH "If-Schedule-Tag-Match" // If-Schedule-Tag-Match; permanent; Ref: [ RFC 6338: Scheduling Extensions to CalDAV]
#define HTTP_FIELD_NAME_IF_UNMODIFIED_SINCE "If-Unmodified-Since" // If-Unmodified-Since; permanent; Ref: [RFC9110, Section 13.1.4: HTTP Semantics]
#define HTTP_FIELD_NAME_IM "IM" // IM; permanent; Ref: [RFC 3229: Delta encoding in HTTP]
#define HTTP_FIELD_NAME_INCLUDE_REFERRED_TOKEN_BINDING_ID "Include-Referred-Token-Binding-ID" // Include-Referred-Token-Binding-ID; permanent; Ref: [RFC 8473: Token Binding over HTTP]
#define HTTP_FIELD_NAME_ISOLATION "Isolation" // Isolation; prov/isolation; provisional; Ref: [OData Version 4.01 Part 1: Protocol][OASIS][Chet_Ensign]
#define HTTP_FIELD_NAME_KEEP_ALIVE "Keep-Alive" // Keep-Alive; permanent; Ref: [RFC 2068: Hypertext Transfer Protocol -- HTTP/1.1]
#define HTTP_FIELD_NAME_LABEL "Label" // Label; permanent; Ref: [RFC 3253: Versioning Extensions to WebDAV: (Web Distributed Authoring and Versioning)]
#define HTTP_FIELD_NAME_LAST_EVENT_ID "Last-Event-ID" // Last-Event-ID; permanent; Ref: [HTML]
#define HTTP_FIELD_NAME_LAST_MODIFIED "Last-Modified" // Last-Modified; permanent; Ref: [RFC9110, Section 8.8.2: HTTP Semantics]
#define HTTP_FIELD_NAME_LINK "Link" // Link; permanent; Ref: [RFC 8288: Web Linking]
#define HTTP_FIELD_NAME_LOCATION "Location" // Location; permanent; Ref: [RFC9110, Section 10.2.2: HTTP Semantics]
#define HTTP_FIELD_NAME_LOCK_TOKEN "Lock-Token" // Lock-Token; permanent; Ref: [RFC 4918: HTTP Extensions for Web Distributed Authoring and Versioning (WebDAV)]
#define HTTP_FIELD_NAME_MAN "Man" // Man; obsoleted; Ref: [RFC 2774: An HTTP Extension Framework][status-change-http-experiments-to-historic]
#define HTTP_FIELD_NAME_MAX_FORWARDS "Max-Forwards" // Max-Forwards; permanent; Ref: [RFC9110, Section 7.6.2: HTTP Semantics]
#define HTTP_FIELD_NAME_MEMENTO_DATETIME "Memento-Datetime" // Memento-Datetime; permanent; Ref: [RFC 7089: HTTP Framework for Time-Based Access to Resource States -- Memento]
#define HTTP_FIELD_NAME_METER "Meter" // Meter; permanent; Ref: [RFC 2227: Simple Hit-Metering and Usage-Limiting for HTTP]
#define HTTP_FIELD_NAME_METHOD_CHECK "Method-Check" // Method-Check; obsoleted; Ref: [Access Control for Cross-site Requests]
#define HTTP_FIELD_NAME_METHOD_CHECK_EXPIRES "Method-Check-Expires" // Method-Check-Expires; obsoleted; Ref: [Access Control for Cross-site Requests]
#define HTTP_FIELD_NAME_MIME_VERSION "MIME-Version" // MIME-Version; permanent; Ref: [RFC9112, Appendix B.1: HTTP/1.1]
#define HTTP_FIELD_NAME_NEGOTIATE "Negotiate" // Negotiate; permanent; Ref: [RFC 2295: Transparent Content Negotiation in HTTP]
#define HTTP_FIELD_NAME_NEL "NEL" // NEL; permanent; Ref: [Network Error Logging]
#define HTTP_FIELD_NAME_ODATA_ENTITYID "OData-EntityId" // OData-EntityId; perm/odata-entityid; permanent; Ref: [OData Version 4.01 Part 1: Protocol][OASIS][Chet_Ensign]
#define HTTP_FIELD_NAME_ODATA_ISOLATION "OData-Isolation" // OData-Isolation; perm/odata-isolation; permanent; Ref: [OData Version 4.01 Part 1: Protocol][OASIS][Chet_Ensign]
#define HTTP_FIELD_NAME_ODATA_MAXVERSION "OData-MaxVersion" // OData-MaxVersion; perm/odata-maxversion; permanent; Ref: [OData Version 4.01 Part 1: Protocol][OASIS][Chet_Ensign]
#define HTTP_FIELD_NAME_ODATA_VERSION "OData-Version" // OData-Version; perm/odata-version; permanent; Ref: [OData Version 4.01 Part 1: Protocol][OASIS][Chet_Ensign]
#define HTTP_FIELD_NAME_OPT "Opt" // Opt; obsoleted; Ref: [RFC 2774: An HTTP Extension Framework][status-change-http-experiments-to-historic]
#define HTTP_FIELD_NAME_OPTIONAL_WWW_AUTHENTICATE "Optional-WWW-Authenticate" // Optional-WWW-Authenticate; permanent; Ref: [RFC 8053, Section 3: HTTP Authentication Extensions for Interactive Clients]
#define HTTP_FIELD_NAME_ORDERING_TYPE "Ordering-Type" // Ordering-Type; permanent; Ref: [RFC 3648: Web Distributed Authoring and Versioning (WebDAV) Ordered Collections Protocol]
#define HTTP_FIELD_NAME_ORIGIN "Origin" // Origin; permanent; Ref: [RFC 6454: The Web Origin Concept]
#define HTTP_FIELD_NAME_ORIGIN_AGENT_CLUSTER "Origin-Agent-Cluster" // Origin-Agent-Cluster; permanent; Ref: [HTML]
#define HTTP_FIELD_NAME_OSCORE "OSCORE" // OSCORE; permanent; Ref: [RFC 8613, Section 11.1: Object Security for Constrained RESTful Environments (OSCORE)]
#define HTTP_FIELD_NAME_OSLC_CORE_VERSION "OSLC-Core-Version" // OSLC-Core-Version; permanent; Ref: [OASIS Project Specification 01][OASIS][Chet_Ensign]
#define HTTP_FIELD_NAME_OVERWRITE "Overwrite" // Overwrite; permanent; Ref: [RFC 4918: HTTP Extensions for Web Distributed Authoring and Versioning (WebDAV)]
#define HTTP_FIELD_NAME_P3P "P3P" // P3P; obsoleted; Ref: [The Platform for Privacy Preferences 1.0 (P3P1.0) Specification]
#define HTTP_FIELD_NAME_PEP "PEP" // PEP; obsoleted; Ref: [PEP - an Extension Mechanism for HTTP]
#define HTTP_FIELD_NAME_PEP_INFO "PEP-Info" // PEP-Info; obsoleted; Ref: [PEP - an Extension Mechanism for HTTP]
#define HTTP_FIELD_NAME_PERMISSIONS_POLICY "Permissions-Policy" // Permissions-Policy; provisional; Ref: [Permissions Policy]
#define HTTP_FIELD_NAME_PICS_LABEL "PICS-Label" // PICS-Label; obsoleted; Ref: [PICS Label Distribution Label Syntax and Communication Protocols]
#define HTTP_FIELD_NAME_PING_FROM "Ping-From" // Ping-From; permanent; Ref: [HTML]
#define HTTP_FIELD_NAME_PING_TO "Ping-To" // Ping-To; permanent; Ref: [HTML]
#define HTTP_FIELD_NAME_POSITION "Position" // Position; permanent; Ref: [RFC 3648: Web Distributed Authoring and Versioning (WebDAV) Ordered Collections Protocol]
#define HTTP_FIELD_NAME_PRAGMA "Pragma" // Pragma; deprecated; Ref: [RFC9111, Section 5.4: HTTP Caching]
#define HTTP_FIELD_NAME_PREFER "Prefer" // Prefer; permanent; Ref: [RFC 7240: Prefer Header for HTTP]
#define HTTP_FIELD_NAME_PREFERENCE_APPLIED "Preference-Applied" // Preference-Applied; permanent; Ref: [RFC 7240: Prefer Header for HTTP]
#define HTTP_FIELD_NAME_PRIORITY "Priority" // Priority; permanent; Ref: [RFC9218: Extensible Prioritization Scheme for HTTP]
#define HTTP_FIELD_NAME_PROFILEOBJECT "ProfileObject" // ProfileObject; obsoleted; Ref: [Implementation of OPS Over HTTP]
#define HTTP_FIELD_NAME_PROTOCOL "Protocol" // Protocol; obsoleted; Ref: [PICS Label Distribution Label Syntax and Communication Protocols]
#define HTTP_FIELD_NAME_PROTOCOL_INFO "Protocol-Info" // Protocol-Info; deprecated; Ref: [White Paper: Joint Electronic Payment Initiative]
#define HTTP_FIELD_NAME_PROTOCOL_QUERY "Protocol-Query" // Protocol-Query; deprecated; Ref: [White Paper: Joint Electronic Payment Initiative]
#define HTTP_FIELD_NAME_PROTOCOL_REQUEST "Protocol-Request" // Protocol-Request; obsoleted; Ref: [PICS Label Distribution Label Syntax and Communication Protocols]
#define HTTP_FIELD_NAME_PROXY_AUTHENTICATE "Proxy-Authenticate" // Proxy-Authenticate; permanent; Ref: [RFC9110, Section 11.7.1: HTTP Semantics]
#define HTTP_FIELD_NAME_PROXY_AUTHENTICATION_INFO "Proxy-Authentication-Info" // Proxy-Authentication-Info; permanent; Ref: [RFC9110, Section 11.7.3: HTTP Semantics]
#define HTTP_FIELD_NAME_PROXY_AUTHORIZATION "Proxy-Authorization" // Proxy-Authorization; permanent; Ref: [RFC9110, Section 11.7.2: HTTP Semantics]
#define HTTP_FIELD_NAME_PROXY_FEATURES "Proxy-Features" // Proxy-Features; obsoleted; Ref: [Notification for Proxy Caches]
#define HTTP_FIELD_NAME_PROXY_INSTRUCTION "Proxy-Instruction" // Proxy-Instruction; obsoleted; Ref: [Notification for Proxy Caches]
#define HTTP_FIELD_NAME_PROXY_STATUS "Proxy-Status" // Proxy-Status; permanent; Ref: [RFC9209: The Proxy-Status HTTP Response Header Field]
#define HTTP_FIELD_NAME_PUBLIC "Public" // Public; obsoleted; Ref: [RFC 2068: Hypertext Transfer Protocol -- HTTP/1.1]
#define HTTP_FIELD_NAME_PUBLIC_KEY_PINS "Public-Key-Pins" // Public-Key-Pins; permanent; Ref: [RFC 7469: Public Key Pinning Extension for HTTP]
#define HTTP_FIELD_NAME_PUBLIC_KEY_PINS_REPORT_ONLY "Public-Key-Pins-Report-Only" // Public-Key-Pins-Report-Only; permanent; Ref: [RFC 7469: Public Key Pinning Extension for HTTP]
#define HTTP_FIELD_NAME_RANGE "Range" // Range; permanent; Ref: [RFC9110, Section 14.2: HTTP Semantics]
#define HTTP_FIELD_NAME_REDIRECT_REF "Redirect-Ref" // Redirect-Ref; permanent; Ref: [RFC 4437: Web Distributed Authoring and Versioning (WebDAV) Redirect Reference Resources]
#define HTTP_FIELD_NAME_REFERER "Referer" // Referer; permanent; Ref: [RFC9110, Section 10.1.3: HTTP Semantics]
#define HTTP_FIELD_NAME_REFERER_ROOT "Referer-Root" // Referer-Root; obsoleted; Ref: [Access Control for Cross-site Requests]
#define HTTP_FIELD_NAME_REFRESH "Refresh" // Refresh; permanent; Ref: [HTML]
#define HTTP_FIELD_NAME_REPEATABILITY_CLIENT_ID "Repeatability-Client-ID" // Repeatability-Client-ID; prov/repeatability-client-id; provisional; Ref: [Repeatable Requests Version 1.0][OASIS][Chet_Ensign]
#define HTTP_FIELD_NAME_REPEATABILITY_FIRST_SENT "Repeatability-First-Sent" // Repeatability-First-Sent; prov/repeatability-first-sent; provisional; Ref: [Repeatable Requests Version 1.0][OASIS][Chet_Ensign]
#define HTTP_FIELD_NAME_REPEATABILITY_REQUEST_ID "Repeatability-Request-ID" // Repeatability-Request-ID; prov/repeatability-request-id; provisional; Ref: [Repeatable Requests Version 1.0][OASIS][Chet_Ensign]
#define HTTP_FIELD_NAME_REPEATABILITY_RESULT "Repeatability-Result" // Repeatability-Result; prov/repeatability-result; provisional; Ref: [Repeatable Requests Version 1.0][OASIS][Chet_Ensign]
#define HTTP_FIELD_NAME_REPLAY_NONCE "Replay-Nonce" // Replay-Nonce; permanent; Ref: [RFC 8555, Section 6.5.1: Automatic Certificate Management Environment (ACME)]
#define HTTP_FIELD_NAME_REPORTING_ENDPOINTS "Reporting-Endpoints" // Reporting-Endpoints; provisional; Ref: [Reporting API]
#define HTTP_FIELD_NAME_REPR_DIGEST "Repr-Digest" // Repr-Digest; permanent; Ref: [RFC 9530, Section 3: Digest Fields]
#define HTTP_FIELD_NAME_RETRY_AFTER "Retry-After" // Retry-After; permanent; Ref: [RFC9110, Section 10.2.3: HTTP Semantics]
#define HTTP_FIELD_NAME_SAFE "Safe" // Safe; obsoleted; Ref: [RFC 2310: The Safe Response Header Field][status-change-http-experiments-to-historic]
#define HTTP_FIELD_NAME_SCHEDULE_REPLY "Schedule-Reply" // Schedule-Reply; permanent; Ref: [RFC 6638: Scheduling Extensions to CalDAV]
#define HTTP_FIELD_NAME_SCHEDULE_TAG "Schedule-Tag" // Schedule-Tag; permanent; Ref: [RFC 6338: Scheduling Extensions to CalDAV]
#define HTTP_FIELD_NAME_SECURITY_SCHEME "Security-Scheme" // Security-Scheme; obsoleted; Ref: [RFC 2660: The Secure HyperText Transfer Protocol][status-change-http-experiments-to-historic]
#define HTTP_FIELD_NAME_SEC_GPC "Sec-GPC" // Sec-GPC; provisional; Ref: [Global Privacy Control (GPC)]
#define HTTP_FIELD_NAME_SEC_PURPOSE "Sec-Purpose" // Sec-Purpose; permanent; Ref: [Fetch]
#define HTTP_FIELD_NAME_SEC_TOKEN_BINDING "Sec-Token-Binding" // Sec-Token-Binding; permanent; Ref: [RFC 8473: Token Binding over HTTP]
#define HTTP_FIELD_NAME_SEC_WEBSOCKET_ACCEPT "Sec-WebSocket-Accept" // Sec-WebSocket-Accept; permanent; Ref: [RFC 6455: The WebSocket Protocol]
#define HTTP_FIELD_NAME_SEC_WEBSOCKET_EXTENSIONS "Sec-WebSocket-Extensions" // Sec-WebSocket-Extensions; permanent; Ref: [RFC 6455: The WebSocket Protocol]
#define HTTP_FIELD_NAME_SEC_WEBSOCKET_KEY "Sec-WebSocket-Key" // Sec-WebSocket-Key; permanent; Ref: [RFC 6455: The WebSocket Protocol]
#define HTTP_FIELD_NAME_SEC_WEBSOCKET_PROTOCOL "Sec-WebSocket-Protocol" // Sec-WebSocket-Protocol; permanent; Ref: [RFC 6455: The WebSocket Protocol]
#define HTTP_FIELD_NAME_SEC_WEBSOCKET_VERSION "Sec-WebSocket-Version" // Sec-WebSocket-Version; permanent; Ref: [RFC 6455: The WebSocket Protocol]
#define HTTP_FIELD_NAME_SERVER "Server" // Server; permanent; Ref: [RFC9110, Section 10.2.4: HTTP Semantics]
#define HTTP_FIELD_NAME_SERVER_TIMING "Server-Timing" // Server-Timing; permanent; Ref: [Server Timing]
#define HTTP_FIELD_NAME_SETPROFILE "SetProfile" // SetProfile; obsoleted; Ref: [Implementation of OPS Over HTTP]
#define HTTP_FIELD_NAME_SET_COOKIE "Set-Cookie" // Set-Cookie; permanent; Ref: [RFC 6265: HTTP State Management Mechanism]
#define HTTP_FIELD_NAME_SET_COOKIE2 "Set-Cookie2" // Set-Cookie2; obsoleted; Ref: [RFC 2965: HTTP State Management Mechanism][RFC 6265: HTTP State Management Mechanism]
#define HTTP_FIELD_NAME_SIGNATURE "Signature" // Signature; permanent; Ref: [RFC 9421, Section 4.2: HTTP Message Signatures]
#define HTTP_FIELD_NAME_SIGNATURE_INPUT "Signature-Input" // Signature-Input; permanent; Ref: [RFC 9421, Section 4.1: HTTP Message Signatures]
#define HTTP_FIELD_NAME_SLUG "SLUG" // SLUG; permanent; Ref: [RFC 5023: The Atom Publishing Protocol]
#define HTTP_FIELD_NAME_SOAPACTION "SoapAction" // SoapAction; permanent; Ref: [Simple Object Access Protocol (SOAP) 1.1]
#define HTTP_FIELD_NAME_STATUS_URI "Status-URI" // Status-URI; permanent; Ref: [RFC 2518: HTTP Extensions for Distributed Authoring -- WEBDAV]
#define HTTP_FIELD_NAME_STRICT_TRANSPORT_SECURITY "Strict-Transport-Security" // Strict-Transport-Security; permanent; Ref: [RFC 6797: HTTP Strict Transport Security (HSTS)]
#define HTTP_FIELD_NAME_SUNSET "Sunset" // Sunset; permanent; Ref: [RFC 8594: The Sunset HTTP Header Field]
#define HTTP_FIELD_NAME_SURROGATE_CAPABILITY "Surrogate-Capability" // Surrogate-Capability; provisional; Ref: [Edge Architecture Specification]
#define HTTP_FIELD_NAME_SURROGATE_CONTROL "Surrogate-Control" // Surrogate-Control; provisional; Ref: [Edge Architecture Specification]
#define HTTP_FIELD_NAME_TCN "TCN" // TCN; permanent; Ref: [RFC 2295: Transparent Content Negotiation in HTTP]
#define HTTP_FIELD_NAME_TE "TE" // TE; permanent; Ref: [RFC9110, Section 10.1.4: HTTP Semantics]
#define HTTP_FIELD_NAME_TIMEOUT "Timeout" // Timeout; permanent; Ref: [RFC 4918: HTTP Extensions for Web Distributed Authoring and Versioning (WebDAV)]
#define HTTP_FIELD_NAME_TIMING_ALLOW_ORIGIN "Timing-Allow-Origin" // Timing-Allow-Origin; prov/timing-allow-origin; provisional; Ref: [Resource Timing Level 1]
#define HTTP_FIELD_NAME_TOPIC "Topic" // Topic; permanent; Ref: [RFC 8030, Section 5.4: Generic Event Delivery Using HTTP Push]
#define HTTP_FIELD_NAME_TRACEPARENT "Traceparent" // Traceparent; permanent; Ref: [Trace Context]
#define HTTP_FIELD_NAME_TRACESTATE "Tracestate" // Tracestate; permanent; Ref: [Trace Context]
#define HTTP_FIELD_NAME_TRAILER "Trailer" // Trailer; permanent; Ref: [RFC9110, Section 6.6.2: HTTP Semantics]
#define HTTP_FIELD_NAME_TRANSFER_ENCODING "Transfer-Encoding" // Transfer-Encoding; permanent; Ref: [RFC9112, Section 6.1: HTTP Semantics]
#define HTTP_FIELD_NAME_TTL "TTL" // TTL; permanent; Ref: [RFC 8030, Section 5.2: Generic Event Delivery Using HTTP Push]
#define HTTP_FIELD_NAME_UPGRADE "Upgrade" // Upgrade; permanent; Ref: [RFC9110, Section 7.8: HTTP Semantics]
#define HTTP_FIELD_NAME_URGENCY "Urgency" // Urgency; permanent; Ref: [RFC 8030, Section 5.3: Generic Event Delivery Using HTTP Push]
#define HTTP_FIELD_NAME_URI "URI" // URI; obsoleted; Ref: [RFC 2068: Hypertext Transfer Protocol -- HTTP/1.1]
#define HTTP_FIELD_NAME_USER_AGENT "User-Agent" // User-Agent; permanent; Ref: [RFC9110, Section 10.1.5: HTTP Semantics]
#define HTTP_FIELD_NAME_VARIANT_VARY "Variant-Vary" // Variant-Vary; permanent; Ref: [RFC 2295: Transparent Content Negotiation in HTTP]
#define HTTP_FIELD_NAME_VARY "Vary" // Vary; permanent; Ref: [RFC9110, Section 12.5.5: HTTP Semantics]
#define HTTP_FIELD_NAME_VIA "Via" // Via; permanent; Ref: [RFC9110, Section 7.6.3: HTTP Semantics]
#define HTTP_FIELD_NAME_WANT_CONTENT_DIGEST "Want-Content-Digest" // Want-Content-Digest; permanent; Ref: [RFC 9530, Section 4: Digest Fields]
#define HTTP_FIELD_NAME_WANT_DIGEST "Want-Digest" // Want-Digest; obsoleted; Ref: [RFC 3230: Instance Digests in HTTP][RFC 9530, Section 1.3: Digest Fields]
#define HTTP_FIELD_NAME_WANT_REPR_DIGEST "Want-Repr-Digest" // Want-Repr-Digest; permanent; Ref: [RFC 9530, Section 4: Digest Fields]
#define HTTP_FIELD_NAME_WARNING "Warning" // Warning; obsoleted; Ref: [RFC9111, Section 5.5: HTTP Caching]
#define HTTP_FIELD_NAME_WWW_AUTHENTICATE "WWW-Authenticate" // WWW-Authenticate; permanent; Ref: [RFC9110, Section 11.6.1: HTTP Semantics]
#define HTTP_FIELD_NAME_X_CONTENT_TYPE_OPTIONS "X-Content-Type-Options" // X-Content-Type-Options; permanent; Ref: [Fetch]
#define HTTP_FIELD_NAME_X_FRAME_OPTIONS "X-Frame-Options" // X-Frame-Options; permanent; Ref: [HTML]
/* End of http_field_name autogenerated section */