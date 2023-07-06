#include "main.h"

int _sqrt_external(int n, int j);

/**
 * _sqrt_recursion - gets the square root of num
 * @n: value to calculate with
 * Return: the results
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_external(n, 0));
}

/**
 * _sqrt_external - recurses
 * @n: number to be evaluated
 * @j: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_external(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (_sqrt_external(n, j + 1));
}
