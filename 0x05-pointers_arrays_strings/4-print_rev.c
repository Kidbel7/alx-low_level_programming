#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be printed
 */

void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		*s++;
		i++;
	}
	*s--;
	i--;
	while (i >= 0)
	{
		_putchar(*s);
		*s--;
		i--;
	}
	_putchar('\n');
}
