#include "main.h"

/**
 * _islower - prints a string of text
 * Return: Returns a 0
 * @c: describe the parameter
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}

	return (0);
}
