#include "main.h"

/**
 * times_table - prints a string of text
 * Return: Returns a 0
 */
void times_table(void)
{
	int x, y, z, dm, g;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z > 9)
			{
				dm = z % 10;
				g = (z - dm) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(g + '0');
				_putchar(dm + '0');
			}
			else
			{
				if (y != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
