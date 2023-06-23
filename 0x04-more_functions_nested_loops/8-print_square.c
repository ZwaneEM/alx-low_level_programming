#include "main.h"

/**
 * print_square - prints #
 * Return: void
 * @size : number of # to print
 */
void print_square(int size)
{
	int i;
	int z;

	for (i = 0; i < size; i++)
	{
		for (z = 0; z < size; z++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
