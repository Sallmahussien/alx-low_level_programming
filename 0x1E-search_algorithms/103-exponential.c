#include "search_algos.h"

/**
 * exponential_search - EXponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located,
 *				 -1 if the value doesn't presented on the array
*/
int exponential_search(int *array, size_t size, int value)
{
	int idx = 1, low, high;

	if (!array)
		return (-1);

	if (array[0] == value)
		return (0);

	while (idx < (int)size && array[idx] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		idx *= 2;
	}

	low = idx / 2;
	high = min(idx, (int)size - 1);
	printf("Value found between indexes [%d] and [%d]\n", low, high);
	return (binary_search_for_exponenial(array, low, high, value));
}

/**
 * min - Find the mininum of two numbers
 * @first_num: first number
 * @second_num: second number
 * Return: the smallest one in value
*/
int min(int first_num, int second_num)
{
	if (first_num < second_num)
		return (first_num);

	return (second_num);
}

/**
 * binary_search_for_exponenial - Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @low: low index
 * @high: high index
 * @value: value to search for
 * Return: first index where value is located,
 *				 -1 if the value doesn't presented on the array
*/
int binary_search_for_exponenial(int *array, int low, int high, int value)
{
	int middle;

	if (!array)
		return (-1);

	while (low <= high)
	{
		middle = low + (high - low) / 2;

		print_array(array, low, high + 1);

		if (array[middle] == value)
			return (middle);

		if (array[middle] > value)
			high = middle - 1;
		else
			low = middle + 1;
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
