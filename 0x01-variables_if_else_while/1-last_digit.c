#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - runs a random number and checks if
 * the last digit is less 0r greater than 5
 * Return: Returns a 0
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*getting the last digit of the integer*/
	last = n % 10;
	/*prints the string from here */
	printf("Last digit of ");
	printf("%d is %d ", n, last);

	if (last > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (last < 6 && last != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	else
	{
		printf("and is 0\n");
	}
	return (0);
}

