#ifndef HAVE_STRLCAT
#include "strlcat.h"
#include <stdlib.h>
#include <string.h>
/*
 * 'strlcat()' - Safely concatenate two strings.
 */

size_t                    /* O - Length of string */
strlcat(char * dst,       /* O - Destination string */
        const char * src, /* I - Source string */
        size_t dst_size)  /* I - Size of destination string buffer */
{
  size_t    srclen;         /* Length of source string */
  size_t    dstlen;         /* Length of destination string */
  size_t size = dst_size - 1;

 /*
  * Figure out how much room is left...
  */

  dstlen = strlen(dst);

  if (size <= dstlen)
  {
      return dstlen;        /* No room, return immediately... */
  }
  size -= dstlen;

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

  memcpy(dst + dstlen, src, srclen);
  dstlen += srclen;
  dst[dstlen] = '\0';

  return dstlen;
}
#endif /* !HAVE_STRLCAT */

