#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int
 * @b: The string to convert
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	/*declaration and initilization*/
	int len;
	unsigned int val = 1;
	unsigned int base_2 = 0;

	if (!b)
		return (0);

	len = strlen(b); /*length of the string*/

	for (len--; len >= 0; len--)
	{
		if (b[len] == '1')
		{
			base_2 += val;
			val *= 2;
		}

		if (b[len] == '0')
		{
			val *= 2;
		}

		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}

	}

	return (base_2);
}
