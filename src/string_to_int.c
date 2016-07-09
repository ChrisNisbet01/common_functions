#include "string_to_int.h"

#include <stdlib.h>
#include <errno.h>

bool string_to_unsigned_int(char const * const string, unsigned int * const integer_value)
{
    char * tmp;
    unsigned int value;
    bool is_numeric;

    errno = 0;

    value = strtoul(string, &tmp, 10);

    is_numeric = errno == 0 && tmp != string && *tmp == '\0';

    if (is_numeric && integer_value != NULL)
    {
        *integer_value = value;
    }

    return is_numeric;
}

bool string_to_int(char const * const string, int * const integer_value)
{
    char * tmp;
    unsigned int value;
    bool is_numeric;

    errno = 0;

    value = strtol(string, &tmp, 10);

    is_numeric = errno == 0 && tmp != string && *tmp == '\0';

    if (is_numeric && integer_value != NULL)
    {
        *integer_value = value;
    }

    return is_numeric;
}

