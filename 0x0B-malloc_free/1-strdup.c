#include "main.h"

int _strlen(char *str);

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	char *temp;
	int i;

	if (str == NULL)
		return (NULL);

	temp = (char *)malloc((_strlen(str) + 1) * sizeof(char));

	if (temp == NULL)
		return (NULL);

	for (i = 0; i < _strlen(str); i++)
		temp[i] = str[i];

	temp[_strlen(str)] = '\0';

	return (temp);
}

/**
 * _strlen - calculate string length.
 * @str: string
 * Return: string length.
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}
