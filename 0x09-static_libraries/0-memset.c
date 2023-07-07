#include "main.h"

/**
* _memset -   copy number bytes form adress "from" to adress "to"
* @s: content is to be copied
* @b: Source of data to be copied
* @n: bytes of the memory
* Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
