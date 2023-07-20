#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	/*initilization*/
	unsigned int i;
	int x;
	va_list args;
	
	if (separator != NULL)
	{
		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			x = va_arg(args, int);

			printf("%d", x);

			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}
			
