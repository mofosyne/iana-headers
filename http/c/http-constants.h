
// IANA HTTP Headers
// Source: https://github.com/mofosyne/iana-headers

typedef enum {
  /* Autogenerated IANA HTTP Status Code (Source: https://www.iana.org/assignments/http-status-codes/http-status-codes.xhtml#http-status-codes-1) */

  /* 100-199 : Informational - Request received, continuing process */
  // Continue; Ref: [RFC9110, Section 15.2.1]
  HTTP_STATUS_CODES_CONTINUE = 100,
  // Switching Protocols; Ref: [RFC9110, Section 15.2.2]
  HTTP_STATUS_CODES_SWITCHING_PROTOCOLS = 101,
  // Processing; Ref: [RFC2518]
  HTTP_STATUS_CODES_PROCESSING = 102,
  // Early Hints; Ref: [RFC8297]
  HTTP_STATUS_CODES_EARLY_HINTS = 103,

  /* 200-299 : Success - The action was successfully received, understood, and accepted */
  // OK; Ref: [RFC9110, Section 15.3.1]
  HTTP_STATUS_CODES_OK = 200,
  // Created; Ref: [RFC9110, Section 15.3.2]
  HTTP_STATUS_CODES_CREATED = 201,
  // Accepted; Ref: [RFC9110, Section 15.3.3]
  HTTP_STATUS_CODES_ACCEPTED = 202,
  // Non-Authoritative Information; Ref: [RFC9110, Section 15.3.4]
  HTTP_STATUS_CODES_NON_AUTHORITATIVE_INFORMATION = 203,
  // No Content; Ref: [RFC9110, Section 15.3.5]
  HTTP_STATUS_CODES_NO_CONTENT = 204,
  // Reset Content; Ref: [RFC9110, Section 15.3.6]
  HTTP_STATUS_CODES_RESET_CONTENT = 205,
  // Partial Content; Ref: [RFC9110, Section 15.3.7]
  HTTP_STATUS_CODES_PARTIAL_CONTENT = 206,
  // Multi-Status; Ref: [RFC4918]
  HTTP_STATUS_CODES_MULTI_STATUS = 207,
  // Already Reported; Ref: [RFC5842]
  HTTP_STATUS_CODES_ALREADY_REPORTED = 208,
  // IM Used; Ref: [RFC3229]
  HTTP_STATUS_CODES_IM_USED = 226,

  /* 300-399 : Redirection - Further action must be taken in order to complete the request */
  // Multiple Choices; Ref: [RFC9110, Section 15.4.1]
  HTTP_STATUS_CODES_MULTIPLE_CHOICES = 300,
  // Moved Permanently; Ref: [RFC9110, Section 15.4.2]
  HTTP_STATUS_CODES_MOVED_PERMANENTLY = 301,
  // Found; Ref: [RFC9110, Section 15.4.3]
  HTTP_STATUS_CODES_FOUND = 302,
  // See Other; Ref: [RFC9110, Section 15.4.4]
  HTTP_STATUS_CODES_SEE_OTHER = 303,
  // Not Modified; Ref: [RFC9110, Section 15.4.5]
  HTTP_STATUS_CODES_NOT_MODIFIED = 304,
  // Use Proxy; Ref: [RFC9110, Section 15.4.6]
  HTTP_STATUS_CODES_USE_PROXY = 305,
  // (Unused); Ref: [RFC9110, Section 15.4.7]
  HTTP_STATUS_CODES__UNUSED = 306,
  // Temporary Redirect; Ref: [RFC9110, Section 15.4.8]
  HTTP_STATUS_CODES_TEMPORARY_REDIRECT = 307,
  // Permanent Redirect; Ref: [RFC9110, Section 15.4.9]
  HTTP_STATUS_CODES_PERMANENT_REDIRECT = 308,

  /* 400-499 : Client Error - The request contains bad syntax or cannot be fulfilled */
  // Bad Request; Ref: [RFC9110, Section 15.5.1]
  HTTP_STATUS_CODES_BAD_REQUEST = 400,
  // Unauthorized; Ref: [RFC9110, Section 15.5.2]
  HTTP_STATUS_CODES_UNAUTHORIZED = 401,
  // Payment Required; Ref: [RFC9110, Section 15.5.3]
  HTTP_STATUS_CODES_PAYMENT_REQUIRED = 402,
  // Forbidden; Ref: [RFC9110, Section 15.5.4]
  HTTP_STATUS_CODES_FORBIDDEN = 403,
  // Not Found; Ref: [RFC9110, Section 15.5.5]
  HTTP_STATUS_CODES_NOT_FOUND = 404,
  // Method Not Allowed; Ref: [RFC9110, Section 15.5.6]
  HTTP_STATUS_CODES_METHOD_NOT_ALLOWED = 405,
  // Not Acceptable; Ref: [RFC9110, Section 15.5.7]
  HTTP_STATUS_CODES_NOT_ACCEPTABLE = 406,
  // Proxy Authentication Required; Ref: [RFC9110, Section 15.5.8]
  HTTP_STATUS_CODES_PROXY_AUTHENTICATION_REQUIRED = 407,
  // Request Timeout; Ref: [RFC9110, Section 15.5.9]
  HTTP_STATUS_CODES_REQUEST_TIMEOUT = 408,
  // Conflict; Ref: [RFC9110, Section 15.5.10]
  HTTP_STATUS_CODES_CONFLICT = 409,
  // Gone; Ref: [RFC9110, Section 15.5.11]
  HTTP_STATUS_CODES_GONE = 410,
  // Length Required; Ref: [RFC9110, Section 15.5.12]
  HTTP_STATUS_CODES_LENGTH_REQUIRED = 411,
  // Precondition Failed; Ref: [RFC9110, Section 15.5.13]
  HTTP_STATUS_CODES_PRECONDITION_FAILED = 412,
  // Content Too Large; Ref: [RFC9110, Section 15.5.14]
  HTTP_STATUS_CODES_CONTENT_TOO_LARGE = 413,
  // URI Too Long; Ref: [RFC9110, Section 15.5.15]
  HTTP_STATUS_CODES_URI_TOO_LONG = 414,
  // Unsupported Media Type; Ref: [RFC9110, Section 15.5.16]
  HTTP_STATUS_CODES_UNSUPPORTED_MEDIA_TYPE = 415,
  // Range Not Satisfiable; Ref: [RFC9110, Section 15.5.17]
  HTTP_STATUS_CODES_RANGE_NOT_SATISFIABLE = 416,
  // Expectation Failed; Ref: [RFC9110, Section 15.5.18]
  HTTP_STATUS_CODES_EXPECTATION_FAILED = 417,
  // (Unused); Ref: [RFC9110, Section 15.5.19]
  HTTP_STATUS_CODES__UNUSED = 418,
  // Misdirected Request; Ref: [RFC9110, Section 15.5.20]
  HTTP_STATUS_CODES_MISDIRECTED_REQUEST = 421,
  // Unprocessable Content; Ref: [RFC9110, Section 15.5.21]
  HTTP_STATUS_CODES_UNPROCESSABLE_CONTENT = 422,
  // Locked; Ref: [RFC4918]
  HTTP_STATUS_CODES_LOCKED = 423,
  // Failed Dependency; Ref: [RFC4918]
  HTTP_STATUS_CODES_FAILED_DEPENDENCY = 424,
  // Too Early; Ref: [RFC8470]
  HTTP_STATUS_CODES_TOO_EARLY = 425,
  // Upgrade Required; Ref: [RFC9110, Section 15.5.22]
  HTTP_STATUS_CODES_UPGRADE_REQUIRED = 426,
  // Precondition Required; Ref: [RFC6585]
  HTTP_STATUS_CODES_PRECONDITION_REQUIRED = 428,
  // Too Many Requests; Ref: [RFC6585]
  HTTP_STATUS_CODES_TOO_MANY_REQUESTS = 429,
  // Request Header Fields Too Large; Ref: [RFC6585]
  HTTP_STATUS_CODES_REQUEST_HEADER_FIELDS_TOO_LARGE = 431,
  // Unavailable For Legal Reasons; Ref: [RFC7725]
  HTTP_STATUS_CODES_UNAVAILABLE_FOR_LEGAL_REASONS = 451,

  /* 500-599 : Server Error - The server failed to fulfill an apparently valid request */
  // Internal Server Error; Ref: [RFC9110, Section 15.6.1]
  HTTP_STATUS_CODES_INTERNAL_SERVER_ERROR = 500,
  // Not Implemented; Ref: [RFC9110, Section 15.6.2]
  HTTP_STATUS_CODES_NOT_IMPLEMENTED = 501,
  // Bad Gateway; Ref: [RFC9110, Section 15.6.3]
  HTTP_STATUS_CODES_BAD_GATEWAY = 502,
  // Service Unavailable; Ref: [RFC9110, Section 15.6.4]
  HTTP_STATUS_CODES_SERVICE_UNAVAILABLE = 503,
  // Gateway Timeout; Ref: [RFC9110, Section 15.6.5]
  HTTP_STATUS_CODES_GATEWAY_TIMEOUT = 504,
  // HTTP Version Not Supported; Ref: [RFC9110, Section 15.6.6]
  HTTP_STATUS_CODES_HTTP_VERSION_NOT_SUPPORTED = 505,
  // Variant Also Negotiates; Ref: [RFC2295]
  HTTP_STATUS_CODES_VARIANT_ALSO_NEGOTIATES = 506,
  // Insufficient Storage; Ref: [RFC4918]
  HTTP_STATUS_CODES_INSUFFICIENT_STORAGE = 507,
  // Loop Detected; Ref: [RFC5842]
  HTTP_STATUS_CODES_LOOP_DETECTED = 508,
  // Not Extended (OBSOLETED); Ref: [RFC2774][status-change-http-experiments-to-historic]
  HTTP_STATUS_CODES_NOT_EXTENDED = 510,
  // Network Authentication Required; Ref: [RFC6585]
  HTTP_STATUS_CODES_NETWORK_AUTHENTICATION_REQUIRED = 511

} http_status_codes_t;
