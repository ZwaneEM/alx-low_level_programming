#include <stdio.h>

/**
 * main - prints a string of text
 * Return: Returns a 0
 */
int main(void)
{
	int number = 0;
	int snd = 0;
	int rep = 9;
	int i;
	int n;
	/*code goes here*/
	for (n = 0; n < 9; n++)
	{
		for (i = 0 ; i < rep; i++)
		{
			putchar('0' + number);
			putchar('1' + i + snd);
				if (rep > 1)
				{
					putchar(',');
					putchar(' ');
				}
		}
	rep--;
	number++;
	snd++;
	}
	putchar('\n');
	return (0);
}
