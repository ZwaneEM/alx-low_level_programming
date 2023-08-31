#include "main.h"

/**
 * binary_to_uint - converts a binary to int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int leng, base_2;

	if (!b)
		return (0);

	i = 0;

	for (leng = 0; b[leng] != '\0'; leng++)
		;

	for (leng--, base_2 = 1; leng >= 0; leng--, base_2 *= 2)
	{
		if (b[leng] != '0' && b[leng] != '1')
		{
			return (0);
		}
		if (b[leng] & 1)
		{
			i += base_2;
		}
	}

	return (i);
}
