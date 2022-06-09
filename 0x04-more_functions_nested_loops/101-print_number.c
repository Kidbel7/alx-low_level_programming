#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 */

void print_number(int n)
{
	unsigned int nu = n;

	if (n < 0)
	{
		_putchar('-');
		nu = -nu;
	}
	if ((nu / 10) > 0)
		print_number(nu / 10);
	_putchar((nu % 10) + '0');
}
