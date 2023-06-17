#include <stdio.h>

/**
 * main - prints all alphabets on one
 * line
 * Return: returns a 0
 */
int main(void)
{
	/*initializing characters*/
	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		/*print numbers in ascending order*/
		putchar('0' + ch);
	}

	for (ch = 0; ch <= 5; ch++)
	{
		/*print alphabets in lower cases a-f*/
		putchar('a' + ch);
	}
	putchar('\n');

	return (0);
}
