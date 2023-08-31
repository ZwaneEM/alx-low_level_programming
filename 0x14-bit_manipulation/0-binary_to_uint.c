#include "main.h"

/**
 * binary_to_uint - converts a binary to int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 1;
	unsigned int index = 1;
	int leng;
	int ans = 0;

	leng = strlen(b);

	while (i < leng) /*counting the number of charecters*/
	{
		index *= 2;
		i++;
	}
	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
		{
			ans = 0;
			break;
		}

		if (b[i] == '1')
		{
			ans += index;
			index /= 2;
		}
		else
		{
			index /= 2;
		}
		i++;
	}

	return (ans);
}
