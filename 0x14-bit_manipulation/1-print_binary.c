#include "main.h"

/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: The value to convert into binary
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int index = 1;
	unsigned long int ans = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (index < n && n != 0)
	{
		index *= 2;

		if (index > n)
		{
			index /= 2;
			break;
		}
	}

	while (index >= 1)
	{
		ans += index;

		if (ans <= n)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
			ans -= index;
		}
		index /= 2;
	}
}
