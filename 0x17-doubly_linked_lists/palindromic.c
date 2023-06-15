#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>


/**
 * tostring - converts number to string
 * @num: input num
 * Return: string
*/
char *tostring(int num)
{
	int n, len = 0, i;
	char *str;

	if (num == 0)
	{
		str = malloc(sizeof(char) * 2);
		str[0] = num + '0';
		str[1] = '\0';
		return (str);
	}

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}

	str = malloc(sizeof(char) * (len + 1));

	for (i = 0; i < len; i++)
	{
		str[len - i - 1] = (num % 10) + '0';
		num /= 10;
	}

	str[i] = '\0';

	return (str);
}

/**
 * _strlen: returns length of str
 * @s: string
 * Return: str length
*/
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}

/**
 * is_palindrome - checks if num is palindrome or not
 * @num: number
 * Return: 1 if it's palindrome, 0 otherwise
*/
int is_palindrome(int num)
{
	char *str = tostring(num);
	int i, len = _strlen(str);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != str[len - i - 1])
			return (0);
	}
	return (1);
}

/**
 * main - main function
 * Return: 0 on success, -1 on fail
*/
int main(void)
{
	int i, j, product, palindrome = 0;
	int op, wr, len;

	for (i = 100; i <= 999; i++)
	{
		for (j = i; j <= 999; j++)
		{
			product = i * j;
			if (is_palindrome(product) == 1)
				if (product > palindrome)
					palindrome = product;
		}
	}

	op = op = open("102-result", O_CREAT | O_WRONLY);
	if (op == -1)
		return (-1);
	wr = write(op, tostring(palindrome), _strlen(tostring(palindrome)));
	if (wr == -1)
		return (-1);
	close(op);
	return (0);
}
