#include <stdio.h>

/**
 * main - prints upper & lower case alphabets
 * Return: Returns a 0
 */
int main(void)
{
	/*initialization*/
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}

	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}

