#include "string_to_unsigned_int.h"

#include <stdlib.h>

bool string_to_unsigned_int(char const * const token, unsigned int * const integer_value)
{
    char * tmp;
    unsigned int value;
    bool is_numeric;

    value = strtoul(token, &tmp, 10);

    is_numeric = tmp != token && *tmp == '\0';

    if (is_numeric && integer_value != NULL)
    {
        *integer_value = value;
    }

    return is_numeric;
}

