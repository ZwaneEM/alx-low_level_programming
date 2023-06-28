#include "main.h"
/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@x: pointer to string.
 *
 *Return: pointer to uppercase string.
 */
char *string_toupper(char *x)
{
	int leng;

	leng = 0;

	while (x[leng] != '\0')
	{
		if (x[leng] >= 97 && x[leng] <= 122)
		{
			x[leng] = x[leng] - 32;
		}
		leng++;
	}
	return (x);
}
