#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: no of arguments
 * @av: array of pointers to arguments
 * Return:  pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *temp;
	int byte, arg, i = 0, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			size++;
	}

	temp = (char *)malloc((size + 1) * sizeof(char));
	if (temp == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (byte = 0; av[arg][byte]; byte++)
			temp[i++] = av[arg][byte];
		temp[i++] = '\n';
	}
	temp[size] = '\0';
	return (temp);
}
