#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (; num1 <= 99; num1++)
	{
		for (num2 = num1; num2 <= 99; num2++)
		{
			if (num1 != num2)
			{
				putchar(num1 / 10 + '0');
				putchar(num1 % 10 + '0');
				putchar(32);
				putchar(num2 / 10 + '0');
				putchar(num2 % 10 + '0');
				if (num1 != 98 || num2 != 99)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
