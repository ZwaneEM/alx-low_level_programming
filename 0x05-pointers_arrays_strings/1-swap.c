#include "main.h"

/**
 * swap_int - prints a string of text
 * Return: Returns void
 * @a: describe the parameter
 * @b: describe the parameter
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
