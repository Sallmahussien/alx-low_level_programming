#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0 Always
 */
int main(void)
{
	unsigned long a = 1, b = 2, next;
	int i;

	for (i = 0; i < 50; i++)
	{
		next = a + b;
		if (i == 49)
			printf("%lu\n", next);
		else
			printf("%lu, ", next);
		a = b;
		b = next;
	}
}
