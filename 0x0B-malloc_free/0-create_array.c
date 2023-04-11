#include "main.h"
/**
 * create_array - creates an array of char.
 * @size: array size.
 * @c: characters
 * Return: pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *temp;

	if (size == 0)
		return (NULL);

	temp = (char *) malloc(size * sizeof(char));

	if (temp == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		temp[i] = c;
	return (temp);
}
