#include "main.h"

/**
 * binary_to_uint - converts a binary to int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num1 = 0, mul = 1;
	int leng;

	if (b == NULL)
		return (0);

	for (leng = 0; b[leng];)
		leng++;

	for (leng -= 1; leng >= 0; leng--)
	{
		if (b[leng] != '0' && b[leng] != '1')
			return (0);

		num1 += (b[leng] - '0') * mul;
		mul *= 2;
	}

	return (num1);
}
