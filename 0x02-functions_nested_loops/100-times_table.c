#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: input parameter
 *
 */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = mult * num;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar('0' + prod / 100);
					_putchar('0' + (prod / 100) % 10);
				}
				else if (prod >= 10 && prod <= 99)
				{
					_putchar('0' + prod / 10);
				}
				_putchar('0' + prod % 10);
			}
			_putchar('\n');
		}
	}
}
