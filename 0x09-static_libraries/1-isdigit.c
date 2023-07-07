#include <stdio.h>

/**
 * _isdigit - checks for digits
 * Return: Returns a 0 if not a digit
 * returns a 1 if digit
 * @c : a value of a character is passed
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

