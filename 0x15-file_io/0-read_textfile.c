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
	ssize_t actual_nchar = 0;
	size_t num = 0;
	FILE *fp;
	int len;
	int letters_cpy = letters;
	char vchar[255];

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");

	if (fp == NULL)
		return (0);

	while (num < (letters - 1))
	{
		fgets(vchar, letters_cpy, fp);
		if (feof(fp))
		{
			break;
		}
		num += strlen(vchar);

		if (num >= letters)
		{
			len = strlen(vchar);
			vchar[len - 1] = '\0';
			num -= 1;
		}
		if ((write(1, vchar, strlen(vchar))) == -1)
			return (0);

	}

	fclose(fp);
	actual_nchar = num;

	return (actual_nchar);
}
