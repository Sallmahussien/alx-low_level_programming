#include "main.h"
/**
 * print_most_numbers - t prints the numbers,
 *                      from 0 to 9, followed by a new line.
 *
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar('0' + num);
	}
	_putchar('\n');
}
