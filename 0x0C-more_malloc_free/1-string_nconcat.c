#include "main.h"

int _strlen(char *str);

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

	s1_len = _strlen(s1);

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

/**
 * _strlen - calculates string length.
 * @str: input string
 * Return: string length.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
