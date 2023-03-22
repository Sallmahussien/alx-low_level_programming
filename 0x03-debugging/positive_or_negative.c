#include "main.h"
/**
 * positive_or_negative - Prints if number is
 * positive or negative or equals to zero.
 * @i: the number to be compared
 *
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%i is positive\n", i);
	else if (i == 0)
		printf("%i is zero\n", i);
	else
		printf("%i is negative\n", i);
}
