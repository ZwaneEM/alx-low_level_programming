#include "main.h"

/**
 * print_line - prints digits 0-14
 * Return: void
 * @n : number of _ to print
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
