#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - prints a list of strings
* @separator: separates the strings to print
* @n: number of strings to print
* Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *temp;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(args, char*);

		if (temp != NULL)
		{
			printf("%s", temp);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);

	printf("\n");
}
