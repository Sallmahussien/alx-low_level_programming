#include "function_pointers.h"

/**
 * main - prints the opcodes of its own main function.
 * @argc: no. of arguments.
 * @argv: array of pointers to arguments
 * Return: 0 Always.
 */
int main(int argc, char *argv[])
{
	int i, bytes;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < bytes; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == (bytes - 1))
			continue;
		printf(" ");
		address++;
	}
	printf("\n");
	return (0);
}
