#include "search_algos.h"

/**
 * binary_search - Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located,
 *				 -1 if the value doesn't presented on the array
*/
int binary_search(int *array, size_t size, int value)
{
	int start = 0, end = size - 1, middle;

	if (!array)
		return (-1);

	while (start <= end)
	{
		middle = start + (end - start) / 2;

		print_array(array, start, end + 1);

		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			end = middle - 1;
		else
			start = middle + 1;
	}
	return (-1);
}

/**
 * print_array - Prints the array elements
 * @array: array to be printed
 * @start: start index
 * @end: end index
*/
void print_array(int *array, int start, int end)
{
	int idx;

	printf("Searching in array: ");
	for (idx = start; idx < end - 1; idx++)
		printf("%d, ", array[idx]);

	printf("%d\n", array[idx]);
}
