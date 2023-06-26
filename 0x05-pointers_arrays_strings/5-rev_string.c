#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int v = 0;
	int i;

	while (s[v] != '\0')
	v++;

	for (i = 0; i < v; i++)
	{
		v--;
		rev = s[i];
		s[i] = s[v];
		s[v] = rev;
	}
}


