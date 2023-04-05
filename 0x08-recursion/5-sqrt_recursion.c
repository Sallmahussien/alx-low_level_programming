#include "main.h"

int _sqrt(int n, int r);
/**
 * _sqrt - square root of a number.
 * @n: number to calculate square root of.
 * @r: root to be tested.
 * Return: square root of n or -1 if n doesn't have natural sqrt.
 */
int _sqrt(int n, int r)
{
	if ((r * r) == n)
		return (r);
	else if (r == (n / 2) && n != 1)
		return (-1);

	return (_sqrt(n, r + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number
 * Return: square root of n or -1 if n doesn't have natural sqrt.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
