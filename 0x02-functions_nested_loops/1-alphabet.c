#include "main.h"

/**
 * pritn_alphabet - prints the alphabet, in lowercase
 * Return: 0
 */

void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
	return (0);
}
