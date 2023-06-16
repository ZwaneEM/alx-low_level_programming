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
	printf("Size of a char: %zu byte(s)\n", sizeof(charT));
	printf("Size of an int: %zu byte(s)\n", sizeof(intT));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longT));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlT));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatlT));

	return (0);
}
