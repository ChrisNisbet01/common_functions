#ifndef __STRLCPY_H__
#define __STRLCPY_H__

#ifndef HAVE_STRLCPY
#include <stddef.h>

size_t strlcpy(char * dst, const char * src, size_t size);

#endif

#endif /* _STRLCPY_H__ */

