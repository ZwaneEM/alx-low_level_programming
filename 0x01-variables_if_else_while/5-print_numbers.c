#include <stdio.h>

/**
 * main - prints base 10 numbers from 0-10
 * Return: Returns a 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
	{
		printf("%d", number);
	}
	printf("\n");
	return (0);
}

