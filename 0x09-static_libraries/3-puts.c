#include "main.h"
#include <stdio.h>

/**
 * main - entry point.
 * Return: 0 Always.
 */
int main(void)
{
	puts("\"Programming is like building multilingual puzzle");
	return (0);
}

/**
 * _puts - prints a string, followed by a new line.
 * @str: string to be printed.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
