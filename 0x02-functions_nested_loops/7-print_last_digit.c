#include "main.h"

/**
 * print_last_digit - prints a string of text
 * Return: Returns a 0
 * @n: describe the parameter
 */
int print_last_digit(int n)
{
	int result = n % 10;

	if (result < 0)
	{
		result = result * -1;
	}
	_putchar(result + '0');
	return (result);
}
