#include "search_algos.h"

/**
 * jump_search - Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located,
 *				 -1 if the value doesn't presented on the array
*/
int jump_search(int *array, size_t size, int value)
{
	int m = sqrt(size);
	int jump = 0;

	if (!array)
		return (-1);

	while (jump < (int)size)
	{
		if (value <= array[jump])
		{
			printf("Value found between indexes [%d] and [%d]\n", jump - m, jump);
			return (linear_search_for_jump(array, jump - m, jump, value));
		}
		else if ((jump + m) > (int)size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", jump, jump + m);
			return (linear_search_for_jump(array, jump, size - 1, value));
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", jump, array[jump]);
			jump += m;
		}
	}

	return (-1);
}

/**
 * linear_search_for_jump - linear search for jump algorithm
 * @array: array to be sorted
 * @start: start index
 * @end: end index
 * @value: value to be searched for
 * Return: first index where value is located,
 *				 -1 if the value doesn't presented on the array
*/
int linear_search_for_jump(int *array, size_t start, size_t end, int value)
{
	size_t idx;

	for (idx = start; idx <= end; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}

	return (-1);
}
