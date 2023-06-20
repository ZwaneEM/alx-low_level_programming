#include "main.h"

/**
 * print_alphabet_x10 - prints a string of text
 * Return: Returns a 0
 */
void print_alphabet_x10(void)
{
	int i;
	int v;

	for (v = 0; v <= 9; v++)
	{
		for (i = 0; i <= 25; i++)
		{
			_putchar('a' + i);
		}
		_putchar('\n');
	}
	/*return (0);*/
}
