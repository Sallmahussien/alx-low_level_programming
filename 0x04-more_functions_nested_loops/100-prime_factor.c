#include "main.h"
/**
 * main - prints the largest prime factor of the number.
 * Return: 0 Always.
 *
 */
int main(void)
{
	long int n = 612852475143, prime_factor;
	int divide = 2;

	while (n != 0)
	{
		if (n % divide != 0)
		{
			divide++;
		}
		else
		{
			prime_factor = n;
			n = n / divide;
			if (n == 1)
				break;
		}
	}
	printf("%ld\n", prime_factor);
	return (0);
}
