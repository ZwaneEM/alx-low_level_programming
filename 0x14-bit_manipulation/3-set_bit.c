#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: The bit to set
 * @index: is the index
 * Return: 1 if it worked, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int index1;

	if (index > 63)
		return (-1);

	index1 = 1 << index;
	*n = (*n | index1);

	return (1);
}
