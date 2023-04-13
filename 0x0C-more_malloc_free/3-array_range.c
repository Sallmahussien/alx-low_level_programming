#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: first array element.
 * @max: last array element.
 * Return: pointer to the created arr
 */
int *array_range(int min, int max)
{
	int *temp, i;

	if (min > max)
		return (NULL);

	temp = malloc(sizeof(int) * (max - min + 1));
	if (temp == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		temp[i] = min++;
	return (temp);
}
