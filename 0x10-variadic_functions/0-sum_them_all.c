#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - sums all arguments received
* @n: number of arguments
* Return: sum or 0 if n = 0
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, x;
	va_list values;


	if (n == 0)
		return (0);

	if (n > 0)
	{
		sum = 0;
		va_start(values, n);

		for (i = 0; i < n; i++)
		{
			x = va_arg(values, int);
			sum = sum + x;
		}
	}
	va_end(values);

	return (sum);
}
