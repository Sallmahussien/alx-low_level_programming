#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @str: string to be encoded
 * Return: encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leet[8] = {'o', 'l', '?', 'e', 'a', '?', '?', 't'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (str[i] == leet[j] || str[i] == (leet[j] - 32))
				str[i] = j + '0';
		}
	}
	return (str);
}
