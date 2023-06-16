#include <stdio.h>

/**
 *main - prints the sizes of different data types
 * Return: Returns a 0
*/
int main(void)
{
	int intT;
	float floatlT;
	long int longT;
	long long int longlT;
	char charT;

	/*sizeof evaluates the size of a variable*/
	printf("Size of char: %zu byte(s)\n", sizeof(charT));
	printf("Size of int: %zu byte(s)\n", sizeof(intT));
	printf("Size of long int: %zu byte(s)\n", sizeof(longT));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlT));
	printf("Size of float: %zu byte(s)\n", sizeof(floatlT));

	return (0);
}
