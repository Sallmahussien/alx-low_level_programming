#include "search_algos.h"

/**
 * advanced_binary - Recursive binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located,
 *				 -1 if the value doesn't presented on the array
*/
int advanced_binary(int *array, size_t size, int value)
{
	int low = 0, high = (int)size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursive(array, low, high, value));
}

/**
 * binary_search_recursive - Recursive binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: low index
 * @high: high index
 * @value: value to search for
 * Return: first index where value is located,
 *				 -1 if the value doesn't presented on the array
*/
int binary_search_recursive(int *array, int low, int high, int value)
{
	int middle;

	if (high < low)
		return (-1);

	print_array(array, low, high + 1);

	middle = low + (high - low) / 2;

	if (array[middle] == value && array[middle - 1] != value)
		return (middle);

	if (array[middle] >= value)
		return (binary_search_recursive(array, low, middle, value));
	else
		return (binary_search_recursive(array, middle + 1, high, value));

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
