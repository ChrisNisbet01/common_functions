#ifndef __STRING_TO_UNSIGNED_INT_H__
#define __STRING_TO_UNSIGNED_INT_H__

#include <stdbool.h>

/* If the value of string is an unsigned integer value, place 
 * the value into integer_value and return true, else return 
 * false. 
 */
bool string_to_unsigned_int(char const * const string, unsigned int * const integer_value);

/* If the value of string is an integer value, place the value 
 * into integer_value and return true, else return false. 
 */
bool string_to_int(char const * const string, int * const integer_value);

#endif /* __STRING_TO_UNSIGNED_INT_H__ */
