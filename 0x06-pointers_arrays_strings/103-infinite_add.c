#include "main.h"
/**
 * infinite_add - adds two numbers.
 * @n1: string contains the first number.
 * @n2: string contains the second number.
 * @r: buffer that stores the results.
 * @size_r: buffer size.
 * Return: pointer to the results.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int size_n1 = 0, size_n2 = 0, sum = 0, rem = 0;
	int len, i, k, h;

	while (n1[size_n1] != '\0')
		size_n1++;
	while (n2[size_n2] != '\0')
		size_n2++;
	if (size_n1 > size_n2)
		len = size_n1;
	else
		len = size_n2;
	r[len] = '\0';
	if (len + 1 >= size_r)
		return (0);
	for (i = len - 1; i >= 0; i--)
	{
		size_n1--;
		size_n2--;
		if (size_n1 >= 0)
			h = n1[size_n1] - '0';
		else
			h = 0;
		if (size_n2 >= 0)
			k = n2[size_n2] - '0';
		else
			k = 0;
		sum = h + k + rem;
		if (sum >= 10)
			rem = sum / 10;
		else
			rem = 0;
		r[i + 1] = (sum % 10) + '0';
	}
	r[0] = rem + '0';
	return (r);
}
