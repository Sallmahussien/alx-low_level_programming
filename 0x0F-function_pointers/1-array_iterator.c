#include "function_pointers.h"

/**
 * array_iterator - executes a given function on each array element.
 * @array: array of integers
 * @size: array size.
 * @action: pointer function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(*array++);
	}
}
