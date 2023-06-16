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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
		{
			continue;
		}
		else
		{
			putchar(ch);
		}
	}
	putchar('\n');

	return (0);
}

