#include "main.h"

/**
 * _puts - prints a string of text
 * Return: Returns void
 * @str: describe the parameter
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
