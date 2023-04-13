#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: no of bytes from s2.
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *temp;
	unsigned int s1_len, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len]; s1_len++)
		;

	temp = malloc(sizeof(char) * (s1_len + n + 1));
	if (temp == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		temp[i] = s1[i];

	for (j = 0; s2[j] && j < n; j++)
		temp[i++] = s2[j];

	temp[s1_len + n] = '\0';

	return (temp);
}

