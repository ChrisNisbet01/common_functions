#ifndef HAVE_STRLCPY
#include "strlcpy.h"
#include <stdlib.h>
#include <string.h>
/*
 * 'strlcpy()' - Safely copy two strings.
 */

size_t                     /* O - Length of string */
strlcpy(char * dst,        /* O - Destination string */
        const char * src,  /* I - Source string */
        size_t dst_size)   /* I - Size of destination string buffer */
{
  size_t srclen;
  size_t size = dst_size - 1;

  /*
   * Figure out how much room is needed...
   */

  srclen = strlen(src);

 /*
  * Copy the appropriate amount...
  */

  if (srclen > size)
  {
      srclen = size;
  }

  memcpy(dst, src, srclen);
  dst[srclen] = '\0';

  return srclen;
}
#endif /* !HAVE_STRLCPY */
