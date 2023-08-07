#include "main.h"

/**
* main - program that copies the content of a file to another file
* @argc: num argument
* @argv: string argument
* Return: 0
*/
int main(int argc, char *argv[])
{
int file_1, file_2;
int numb1 = 1024, numb2 = 0;
char buf[1024];

if (argc != 3)
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file_1 = open(argv[1], O_RDONLY);
if (file_1 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
file_2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
	| S_IRGRP | S_IWGRP | S_IROTH);
if (file_2 == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	close(file_1), exit(99);
}
while (numb1 == 1024)
{
	numb1 = read(file_1, buf, 1024);
	if (numb1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	numb2 = write(file_2, buf, numb1);
	if (numb2 < numb1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
}

if (close(file_1) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_1), exit(100);

if (close(file_2) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_2), exit(100);

return (0);
}
