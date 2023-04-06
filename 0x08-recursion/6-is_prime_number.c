#include "main.h"
int divisble(int n, int i);

/**
 * divisble - checks if number is divisble or not.
 * @n: number.
 * @i: number that ranges from 0 to n/2.
 * Return: 0 if n is divisble, 1 if n is not divisble.
 */
int divisble(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i <= n / 2)
		return (divisble(n, i + 1));
	return (1);
}

/**
 * is_prime_number - checks if number is prime or not
 * @n: number
 * Return: 0 if n is not prime
 *         1 if n is prime.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (divisble(n, 2));
}
