#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 < 8; num1++)
	{
		for (num2 = num1 + 1; num2 < 9; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
				putchar('0' + num1);
				putchar('0' + num2);
				putchar('0' + num3);
				if (num1 != 7)
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
