#include "string_to_unsigned_int.h"

#include <stdlib.h>

unsigned int token_to_unsigned_int(char const * const token, bool * is_numeric)
{
    char * tmp;
    unsigned int value;

    value = strtoul(token, &tmp, 10);

    *is_numeric = tmp != token && *tmp == '\0';

    return value;
}

