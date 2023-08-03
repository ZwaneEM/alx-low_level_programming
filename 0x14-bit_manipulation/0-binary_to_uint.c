#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ret;
	int len, bit;

	if (!b)
		return (0);

	ret = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, bit = 1; len >= 0; len--, bit *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ret += bit;
		}
	}

	return (ret);
}
