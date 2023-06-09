#include "main.h"

int _strlen_recursion(char *s);
int _plaindrome(char *s, int len, int index);

/**
 *  _strlen_recursion -  returns the length of a string.
 *  @s: string.
 *  Return: string length.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}

/**
 * _plaindrome - checks plaindrome string.
 * @s: string
 * @len: string length.
 * @index: index of char in a string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int _plaindrome(char *s, int len, int index)
{
	if (s[index] == s[len - index - 1])
	{
		if (index == len / 2)
			return (1);
		return (_plaindrome(s, len, index + 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is plaindrome or not
 * @s: string
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);

	if (!*s)
		return (1);
	return (_plaindrome(s, length, 0));
}
