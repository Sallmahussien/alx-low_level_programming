#include "variadic_functions.h"

/**
 * print_numbers -  numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));

			if (i == n - 1)
				continue;
			printf("%c ", *separator);
		}
		printf("\n");
	}
}
