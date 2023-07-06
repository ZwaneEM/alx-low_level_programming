#include "main.h"


int is_prime_external(int n, int i);

/**
* is_prime_number - prints 1 when n is a prime
* @n : number to evaluate
* Return: result of evaluation
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_external(n, 2));
}

/**
* is_prime_external - checks if num is prime
* @n: number to check
* @i: iteration value
* Return: the results of function
*/

int is_prime_external(int n, int i)
{
	if (n % i == 0 && i < n)
		return (0);

	if (n % i != 0 && i < n)
		return (is_prime_external(n, i + 1));

	return (1);
}
