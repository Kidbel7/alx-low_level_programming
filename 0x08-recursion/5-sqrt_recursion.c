#include "main.h"

/**
 * sqr - returns the natural square root of a number
 * @sq: square root
 * @nu: number
 * Return: -1 if n doesn't have a naturl square root
 */

int sqr(int sq, int nu)
{
	if ((sq * sq) > nu)
		return (-1);
	else if ((sq * sq) == nu)
		return (sq);
	else
		return (sqr(nu, sq + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: -1 if n doesn't have a naturl square root
 */

int _sqrt_recursion(int n)
{
	int sq = 0;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (sqr(n, sq));
}
