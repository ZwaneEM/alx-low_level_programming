#include "main.h"

/**
 * more_numbers - prints digits 0-14
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int count = 0;
	int z;
	int r;

	for (i = 0; i < 10; i++)
	{
		for (z = 0; z < 2; z++)
		{
			for (r = 0; r < 10; r++)
			{
				if (count > 9)
				{
					_putchar('1');
				}
				_putchar('0' + r);
				count++;

				if (count == 15)
				{
					break;
				}
			}
		}
		count = 0;
		_putchar('\n');
	}
}
