#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 *
 */
void print_triangle(int size)
{
	int i, j, k, count = size - 1, count2 = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < count; j++)
			{
				putchar(32);
			}
			count2++;
			for (k = 0; k < count2; k++)
			{
				putchar('#');
			}
			putchar('\n');
			count--;
		}
	}
}

