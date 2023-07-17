#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;
	
	if (size > 0)
	{
		s = (char*)malloc(sizeof(c) * size);
	}
	
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	
	return (s);
}
