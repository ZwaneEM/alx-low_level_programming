#include "main.h"

/**
 * main - entry point
 * @argc: The number of arguments
 * @args: Null terminated arguments
 * Return: 0 on success and -1 on error
 */
int main(int argc, char **args)
{
	char *erro = "Usage: cp file_from file_to\n";
	int len;

	if (argc != 3)
	{
		len = strlen(erro);
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", len);
		exit(97);
	}

	cpy_files(args[1], args[2]);

	return (0);
}

/**
 * cpy_files - copies a file to another file
 * @filename_f: file to copy from
 * @filename_t: file to copy to
 * Return: 1 on success or -1 on failure
 */
int cpy_files(char *filename_f, char *filename_t)
{
	int file_from, file_to, nwrite, readn;
	char *nread[1024];
	char *erro_f = "Error: Can't read from file";
	int close1, close2;

	file_from = open(filename_f, O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", erro_f, filename_f);
		exit(98);
	}
	file_to = open(filename_t, O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_t);
		exit(99);
	}
	while ((readn = read(file_from, nread, 1024)) > 0)
	{
		nwrite = write(file_to, nread, readn);
		if (nwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_t);
			exit(99);
		}
	}
	close1 = close(file_from);
	if (close1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	close2 = close(file_to);
	if (close2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (1);
}
