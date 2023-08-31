#include "main.h"

/**
 * get_bit - returns a value of a bit at a given index
 * @n: The value
 * @index: is the index
 * Return: the value of the bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int index1;

	if (n == 0 && index < 64)
		return (0);
	index1 = 0;

	while (index1 <= 63)
	{
		if (index == index1)
		{
			return (n & 1);
		}
		index1++;
		n >>= 1;
	}

	return (-1);
}
