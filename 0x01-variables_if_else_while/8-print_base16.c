#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all single digit numbers of base 16 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;
	char ch = 'a';

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	printf("\n");
	return (0);
}
