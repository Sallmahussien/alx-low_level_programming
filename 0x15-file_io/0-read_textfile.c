#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 *                 the POSIX standard output.
 * @filename: file name
 * @letters: number of letters to be read
 * Return: actual number of letters it could read and print, 0 if fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, r, wr;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	r = read(op, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, r);

	if (op == -1 || r == -1 || wr == -1 || wr != r)
		return (0);

	close(op);
	return (wr);
}
