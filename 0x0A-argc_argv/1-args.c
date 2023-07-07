#include <stdio.h>

/**
 * main - prints the number of arg passed to it
 * @argc: count of arguments
 * @argv: args array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
