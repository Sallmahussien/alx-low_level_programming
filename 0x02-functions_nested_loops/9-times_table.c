#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num < 10; num++)
	{
		_putchar('0');
		for (mult = 1; mult < 10; mult++)
		{
			_putchar(',');
			_putchar(32);

			prod = num * mult;
			if (prod <= 9)
				_putchar(32);
			else
				_putchar('0' + prod / 10);
			_putchar('0' + prod % 10);
		}
		_putchar('\n');
	}
}
