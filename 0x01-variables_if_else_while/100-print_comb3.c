#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print ll possible different combinations of two digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 9; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);
			if (num1 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
