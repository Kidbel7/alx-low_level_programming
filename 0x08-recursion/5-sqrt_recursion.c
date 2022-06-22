#include "main.h"

/**
 * sqrt - returns the natural square root of a number
 * @sq: square root
 * @nu: number
 * Return: -1 if n doesn't have a naturl square root
 */

int sqrt(int sq, int nu)
{
	if (sq * sq > nu)
		return (-1);
	else if (sq * sq == nu)
		return (sq);
	else
		return (sqrt(nu, sq + 1));
}

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
		return (sqr(n, sq));
}
