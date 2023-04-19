#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of nums
 * @size: array size
 * @cmp: pointer function
 * Return: index for the first element that cmp return
 *         -1 if no element match or size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(*array++) != 0)
			return (i);
	return (-1);
}
