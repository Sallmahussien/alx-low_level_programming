#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @str:input string.
 * Return: pointer to capitalized string
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == ' ' ||
		    str[i] == '\t' ||
		    str[i] == '\n' ||
		    str[i] == ',' ||
		    str[i] == ';' ||
		    str[i] == '.' ||
		    str[i] == '!' ||
		    str[i] == '?' ||
		    str[i] == '"' ||
		    str[i] == '(' ||
		    str[i] == ')' ||
		    str[i] == '{' ||
		    str[i] == '}' ||
		    i == 0)
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		i++;
	}
	return (str);
}
