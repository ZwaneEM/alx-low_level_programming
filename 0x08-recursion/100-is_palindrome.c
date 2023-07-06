#include "main.h"

int is_iter(char *s, int j, int i);
int is_leng(char *s);

/**
* is_palindrome - checks to see if string is palindrome
* @s: string to evaluate
* Return: 1 if string is pali, 0 if not
*/
int is_palindrome(char *s)
{

	/* declaration and initilization*/
	int leng;
	int result;

	if (*s == 0)
		return (1);


	/* finding the length of string */
	leng = is_leng(s);

	/*confirm string is palindrome or not*/
	result = is_iter(s, 0, leng);

	return (result);
}

/**
* is_leng - get the length of the string
* @s: string to measure
* Return: length of string
*/
int is_leng(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + is_leng(s + 1));
}

/**
* is_iter - evaluates the string
* @s: the string to test
* @i: the leng of the current string
* @j: iterator
* Return: 1 if true or 0 if not
*/
int is_iter(char *s, int j, int i)
{
	if (*(s + j) != *(s + i - 1))
		return (0);

	if (j >= i)
		return (1);

	return (is_iter(s, j + 1, i - 1));
}
