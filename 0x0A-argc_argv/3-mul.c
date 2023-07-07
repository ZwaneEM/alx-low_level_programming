#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc: size of argument array
 * @argv: array of strings
 * Return: 0
 */

int main(int argc, char **argv)
{

	int val1;
	int val2;
	int result;

	if (argc == 3)
	{
		val2 = atoi(*(argv + 2));
		val1 = atoi(*(argv + 1));

		result = val1 * val2;
		printf("%d\n", result);
	}
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
