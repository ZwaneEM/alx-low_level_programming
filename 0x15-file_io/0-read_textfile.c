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
	FILE *fp;
	char position;
	size_t count = 0;

	if (!filename)
		return (0);

	fp = fopen(filename, "r");

	if (!fp)
		return (0);

	while ((position = getc(fp)) != EOF && count < letters)
	{
		fprintf(stdout, "%c", position);
		count++;
	}

	fclose(fp);

	return (count);
}
