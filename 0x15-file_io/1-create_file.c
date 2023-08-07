#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: variable pointer
 * @text_content: content file
 * Description: Create a function that creates a file.
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int count = 0;
	int fp;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[count] != '\0')
	{
		count++;
	}

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	write(fp, text_content, count);

	return (1);
}
