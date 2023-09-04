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

	if (argc < 3)
	{
		len = strlen(erro);
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", len);
		exit(ERROR_USAGE);
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

	file_from = open(filename_f, O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "%s %s\n", erro_f, filename_f);
		exit(ERROR_USAGE);
	}

	file_to = open(filename_t, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_t);
		exit(ERROR_READ);
	}

	while ((readn = read(file_from, nread, sizeof(nread))) > 0)
	{
		nwrite = write(file_to, nread, readn);
		if (nwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_t);
			exit(99);
		}
	}
	
	if (close(file_from) == -1)
	{
	    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}

	return (1);
}
