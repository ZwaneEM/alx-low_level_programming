#include <stdio.h>
#include <conio.h>

/**
 *main - prints the sizes of different data types
 * Return: Returns a 0
*/
int main(void)
{
	clrscr();
	printf("Size of a char: %2d byte(s) \n", sizeof(char));
	printf("Size of a int:  %2d byte(s) \n", sizeof(int));
	printf("Size of a long int: %2d byte(s) \n", sizeof(long int));
	printf("Size of a long long int: %2d byte(s) \n", sizeof(long long int));
	printf("Size of a float: %2d byte(s) \n", sizeof(float));
	getch();

	return (0);
}
