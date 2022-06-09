#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times the character is printed
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
