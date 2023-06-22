#include <stdio.h>

/**
 * _isupper - checks for uppercase characters
 * Return: Returns a 0 if lowercase
 * returns a 1 if uppercase
 * @c : a value of a character is passed
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
