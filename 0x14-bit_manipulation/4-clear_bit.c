#include "main.h"

/**
 * clear_bit - sets the value of a bit to 1 at a given index.
 * @n: pointer to number
 * @index: to be setted
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num = 1;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(num << index);

	return (1);
}
