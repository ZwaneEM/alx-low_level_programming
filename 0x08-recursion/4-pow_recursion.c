#include "main.h"

/**
 * _pow_recursion - calculate the power
 * @x: base
 * @y: the power
 * Return: the results
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
