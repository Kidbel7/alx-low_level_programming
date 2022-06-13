#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reersed
 */

void rev_string(char *s)
{
	int i = 0, j = 0;
	char c;

	while (s[j++])
		i++;
	for (j = i -1; j >= i / 2; j++)
	{
		c = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = c;
	}
}
