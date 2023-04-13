#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: first array element.
 * @max: last array element.
 * Return: pointer to the created arr
 */
int *array_range(int min, int max)
{
	int *temp, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	temp = malloc(sizeof(int) * size);
	if (temp == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		temp[i] = min++;
	return (temp);
}
