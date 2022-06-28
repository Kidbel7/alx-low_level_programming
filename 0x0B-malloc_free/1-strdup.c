#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string
 * Return: NULL if str = NULL or insufficient memory,
 * a pointer to the duplicate string otherwise
 */

char *_strdup(char *str)
{
	char *c;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	c = malloc(i * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		c[j] = str[j];
	return (c);
}
