#include <stdio.h>

/**
 * main - prints all alphabets on one
 * line
 * Return: returns a 0
 */
int main(void)
{
	/*initializing characters*/
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
