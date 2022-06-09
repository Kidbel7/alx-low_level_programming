#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void);
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 0;
		while (c <= 14)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
