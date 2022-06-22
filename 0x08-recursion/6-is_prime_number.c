#include "main.h"

int prime_number(int n, int i);

/**
 * is_prime_number - returns 1 if the input integeris a prime number
 * @n: prime number
 * Return: 1 if prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (prime_number(n, n - 1));
}

/**
 * prime_number - checks if a number is prime number
 * @n: number to be checked
 * @i: iterator
 * Return: 1 if prime number, 0 otherwise
 */

int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0 && i > 0)
		return (0);
	else
		return (prime_number(n, i - 1));
}
