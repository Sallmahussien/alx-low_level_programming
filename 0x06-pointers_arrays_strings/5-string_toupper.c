#include "main.h"
/**
 * string_toupper - changes all lowercase letters
 *                  of a string to uppercase.
 * @s: input string.
 */
char *string_toupper(char *s)
{
	while (*s)
	{
		if (*s >= 97 && *s <= 122)
			*s -= 32;
		s++;
	}
	return (s);
}
