#include <stdio.h>

/**
* main - prints its name
* @argc: number of arguments
* @argv: string array
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i = argc - 1;

	printf("%s\n", *(argv + i));

	return (0);
}
