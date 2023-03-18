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
	int num1, num2, num3, num4;

	for (num1 = 0; num1 <  10; num1++)
	{
		for (num2 = 0; num2 < 9; num2++)
		{
			for (num3 = num1; num3 < 10; num3++)
			{
				for (num4 = num2 + 1; num4 < 10; num4++)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(32);
					putchar(num3 + '0');
					putchar(num4 + '0');
					if (num1 == 9 && num2 == 8)
						break;
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
