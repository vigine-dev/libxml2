#ifndef XML_URI_H_PRIVATE__
#define XML_URI_H_PRIVATE__

#include <libxml/xmlstring.h>

XML_HIDDEN int
xmlIsUriTooLong(const xmlChar *uri, const int max_uri_length);

#endif /* XML_URI_H_PRIVATE__ */
