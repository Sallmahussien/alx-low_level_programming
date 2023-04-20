#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

/**
 * print_char - print a character.
 * @arg: argument list pointed to character to be printed.
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_int - print integer
 * @arg: argument list pointed to integer to be printed
 */
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - print float
 * @arg: argument list pointed to float to be printed
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_string - print string.
 * @arg: argument list pointed to string
 */
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything.
 * @format: A string of characters representing the argument types.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	printer_t func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	char *separator = "";
	int i = 0, j = 0;

	va_start(args, format);
	while (format && format[i])
	{
		while (j < 4)
		{
			if (*func[j].symbol == format[i])
			{
				printf("%s", separator);
				func[j].print(args);
				separator = ", ";
			}
			j++;
		}
		j = 0;
		i++;
	}
	printf("\n");
	va_end(args);
}
