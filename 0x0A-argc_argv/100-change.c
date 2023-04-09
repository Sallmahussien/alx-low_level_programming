#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins
 *        to make change for an amount of money.
 * @argc: number of arguments.
 * @argv: array of pointers to arguments.
 * Return: 1 if the number of arguments passed
 *         to your program is not exactly 1,
 *         0 otherwise.
 */
int main(int argc, char *argv[])
{
	int coins = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
			cents -= 25;
		else if ((cents - 10) >= 0)
			cents -= 10;
		else if ((cents - 5) >= 0)
			cents -= 5;
		else if ((cents - 2) >= 0)
			cents -= 2;
		else
			cents--;
	}
	printf("%d\n", coins);
	return (0);
}
