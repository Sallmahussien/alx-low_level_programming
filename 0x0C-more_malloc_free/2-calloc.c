#include "main.h"
/**
 * _calloc - allocates memory for an array.
 * @nmemb: no of array elements.
 * @size: size of each element.
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;
	char *temp;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	temp = arr;
	for (i = 0; i < nmemb; i++)
		temp[i] = '\0';
	return (temp);
}
