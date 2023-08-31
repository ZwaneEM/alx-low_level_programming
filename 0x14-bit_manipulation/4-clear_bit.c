#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: the value to process
 * @index: the index
 * Return: 1 on success, -1 of error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int index1;

	if (index > 63)
		return (-1);

	index1 = 1 << index;

	if (*n & index1)
		*n ^= index1;

	return (1);
}
