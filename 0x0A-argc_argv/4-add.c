#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: array of pointers to arguments.
 * Return: 1 if one of the number contains symbols that are not digits,
 *         0 otherwise
 */
int main(int argc, char *argv[])
{
	int i, sum = 0, digit;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
