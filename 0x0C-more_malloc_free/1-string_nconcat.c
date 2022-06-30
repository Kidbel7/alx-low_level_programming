#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes
 * Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j, k;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	c = malloc(sizeof(char) * (i + j + 1));
	if (c == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		c[k] = s1[k];
	for (k = 0; k < j; k++)
		c[k + i] = s2[k];
	c[i + j] = '\0';
	return (c);
}
