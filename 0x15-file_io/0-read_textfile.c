#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters it should read
 * and print
 *
 * Return: The actual number of letters it could read
 * and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/*declaration and initiliazation*/
	ssize_t fp, data, print;
	char *file;

	if (filename == NULL)
		return (0);

	file = malloc(letters);
	if (file == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
	{
		free(file);
		return (0);
	}

	data = read(fp, file, letters);

	print = write(STDOUT_FILENO, file, data);

	close(fp);
	
	return (print);
}
