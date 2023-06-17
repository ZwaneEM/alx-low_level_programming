#include <stdio.h>

/**
 * main - prints base 10 numbers from 0-10
 * Return: Returns a 0
 */
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar('0' + number);
		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
