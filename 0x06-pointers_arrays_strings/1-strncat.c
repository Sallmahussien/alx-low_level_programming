#include "main.h"
/**
 * _strncat -  concatenates two strings.
 * @dest: string to be concatenated
 * @src: string to be concatenated
 * @n: no of bytes to be concatenated fromthe second string
 * Return: the concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[len] != '\0')
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len++] = src[i];

	return (dest);
}
