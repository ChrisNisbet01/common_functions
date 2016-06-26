#ifndef __STRLCAT_H__
#define __STRLCAT_H__

#ifndef HAVE_STRLCAT
#include <stddef.h>

size_t strlcat(char * dst, const char * src, size_t size);

#endif

#endif /* _STRLCAT_H__ */

