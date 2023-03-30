#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @str: string to be encoded.
 * Return: pointer to the encoded string.
 */
char *rot13(char *str)
{
	int i, j;
	char alpha1[52] = {'A', 'B', 'C', 'D', 'E', 'F',
		'G', 'H', 'I', 'J', 'K', 'L',
			   'M', 'N', 'O', 'P', 'Q', 'R',
			   'S', 'T', 'U', 'V', 'W', 'X',
			   'Y', 'Z', 'a', 'b', 'c', 'd',
			   'e', 'f', 'g', 'h', 'i', 'j',
			   'k', 'l', 'm', 'n', 'o', 'p',
			   'q', 'r', 's', 't', 'u', 'v',
			   'w', 'x', 'y', 'z'};
	char rot13[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
		'T', 'U', 'V', 'W', 'X', 'Y',
			  'Z', 'A', 'B', 'C', 'D', 'E',
			  'F', 'G', 'H', 'I', 'J', 'K',
			  'L', 'M', 'n', 'o', 'p', 'q',
			  'r', 's', 't', 'u', 'v', 'w',
			  'x', 'y', 'z', 'a', 'b', 'c',
			  'd', 'e', 'f', 'g', 'h', 'i',
			  'j', 'k', 'l', 'm'};

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alpha1[j])
			{
				str[i] = rot13[j];
				break;
			}
		}
	}
	return (str);
}
