#include "main.h"

/**
 * print_triangle - prints #
 * Return: void
 * @size : number of # to print
 */
void print_triangle(int size)
{
	int a = 1;
	int star = size - 1;
	int i;
	int z;
	int r;
	
	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < size; i++)
	{
		for (z = 0; z < size - a; z++)
		{
			_putchar(' ');
		}
		for (r = 0; r < size - star; r++)
		{
			_putchar('#');
		}
		a++;
		star--;
		_putchar('\n');
	}
}
