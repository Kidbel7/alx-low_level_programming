#include "main.h"

int sqr(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 if n doesn't have a naturl square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqr(n, 0));
}

/**
 * sqr - returns the natural square root of a number
 * @n: number
 * @i: iterator
 * Return: -1 if n doesn't have a naturl square root
 */

int sqr(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqr(n, i + 1));
}
