#include "main.h"

/**
 * _abs - prints a string of text
 * Return: Returns a m, n
 * @n: describe the parameter
 */
int _abs(int n)
{
	int m = n - (n * 2);

	if (n < 0)
	{
		return (m);
	}
	else
	{
		return (n);
	}

}
