#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array to be reversed.
 * @n: size of array.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}

