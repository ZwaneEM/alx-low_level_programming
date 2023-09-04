#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 *	standard output
 * @filename: is the name of the file to open and read
 * @letters: the number of chars to read and print
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t nchar;
	char *vchar;

	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	vchar = malloc(sizeof(char) * letters);
	if (vchar == NULL)
		return (0);

	nchar = read(fp, vchar, letters);

	write(STDOUT_FILENO, vchar, letters);

	free(vchar);

	close(fp);

	return (nchar);
}
