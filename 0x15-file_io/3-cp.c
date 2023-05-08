#include "main.h"

/**
 * check_error_close - check if there's an error while closing the file
 * @c: integer number that returned from close function
 * @fd: file descriptor
 */
void check_error_close(int c, int fd)
{
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main -  copies the content of a file to another file.
 * @argc: argument number
 * @argv: array of pointers to arguments
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, r, w, c;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	r = read(file_from, buffer, 1024);
	while (r)
	{
		if (r == -1 || file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(file_from);
			close(file_to);
			exit(98);
		}
		w = write(file_to, buffer, r);
		if (w == -1 || w != r || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
		r = read(file_from, buffer, 1024);
	}

	c = close(file_from);
	check_error_close(c, file_from);

	c = close(file_to);
	check_error_close(c, file_to);

	return (0);
}
