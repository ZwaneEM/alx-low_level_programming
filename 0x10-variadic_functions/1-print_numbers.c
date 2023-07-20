#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_numbers - prints a line of numbers
* @separator: separates values
* @n: number of values to print
* Return: Nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*initilization*/
	unsigned int i;
	int x;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);

		printf("%d", x);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
}
