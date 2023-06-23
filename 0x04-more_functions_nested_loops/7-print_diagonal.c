#include "main.h"

/**
 * print_diagonal - prints \
 * Return: void
 * @n : number of \ to print
 */
void print_diagonal(int n)
{
	int i;
	int z;
	int a = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (z = 0; z < n; z++)
	{
		for (i = 0; i < 0 + a; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		a = a + 1;
		_putchar('\n');
	}
}
