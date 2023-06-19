#include <stdio.h>

int add(int num1, int num2)
{
	return (num1 + num2);
}

int sub(int num1, int num2)
{
	return (num1 - num2);
}

int mul(int num1, int num2)
{
	return (num1 * num2);
}

int div(int num1, int num2)
{
	if (num2 == 0)
		return (0);
	return (num1 / num2);
}

int mod(int num1, int num2)
{
	if (num2 == 0)
		return (0);
	return (num1 % num2);
}
