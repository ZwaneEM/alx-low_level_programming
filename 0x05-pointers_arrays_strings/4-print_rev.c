#include "main.h"

/**
 * print_rev - prints a string of text
 * Return: Returns void
 * @s: describe the parameter
 */
void print_rev(char *s)
{
	int i;
	int hold;

	for (i = 0; s[i] != '\0'; i++)
	{
		hold = i + 1;
	}

	for (; hold >= 0; hold--)
	{
		_putchar(s[hold]);
	}
	_putchar('\n');
}
