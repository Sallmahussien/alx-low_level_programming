#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 *             to get from one number to another.
 * @n: number to be flipped
 * @m: number to filp n to
 * Return: no. of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int bits = 0;

	num = n ^ m;
	while (num > 0)
	{
		if (num & 1)
			bits++;
		num >>= 1;
	}
	return (bits);
}
