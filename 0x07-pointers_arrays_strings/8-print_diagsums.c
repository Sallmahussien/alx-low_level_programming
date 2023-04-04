#include "main.h"
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers.
 * @a: input matrix.
 * @size: matrix size.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + (i * size + i));
		sum2 += *(a + ((size - 1 - i) * size + i));
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
