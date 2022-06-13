#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reersed
 */

void rev_string(char *s)
{
	int i = 0, j = 0, k = 0;
	char c;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;

	for (k = 0; k < i / 2; k++)
	{
		c = s[k];
		s[k] = s[j];
		s[j--] = c;
	}
}
