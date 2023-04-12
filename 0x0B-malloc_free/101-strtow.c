#include "main.h"

int wordcount(char *str);

/**
 * strtow - splits a string into words.
 * @str: string.
 * Return: returns a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	int words, i = 0, wlen, wcount = 0, j, k;
	char **strings;

	if (str == NULL && str[0] == '\0')
		return (NULL);

	words = wordcount(str);
	if (words == 0)
		return (NULL);
	strings = malloc((words + 1) * sizeof(char *));
	if (strings == NULL)
		return (NULL);
	strings[words] = NULL;

	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (wlen = 1; str[i + wlen] && str[i + wlen] != ' '; wlen++)
				;
			wlen++;
			strings[wcount] = (char *)malloc(wlen * sizeof(char));
			wlen--;
			if (strings[wcount] == NULL)
			{
				for (j = 0; j < wcount; j++)
					free(strings[j]);
				free(strings[words]);
				free(strings);
				return (NULL);
			}
			for (k = 0; k < wlen; k++)
				strings[wcount][k] = str[i + k];
			strings[wcount][wlen] = '\0';
			wcount++;
			i += wlen;
		}
		else 
			i++;
	}
	return (strings);
}

/**
 * wordcount - calculate no of words in a string.
 * @str: input string.
 * Return: no of words.
 */
int wordcount(char *str)
{
	int i, count;

	for (i = 0; str[i]; i++)
	{
		if (str[i] == ' ')
		{
			if (str[i + 1] != ' ' && str[i + 1] != '\0')
				count++;
		}
		else if (i == 0)
			count++;
	}
	return (count);
}
