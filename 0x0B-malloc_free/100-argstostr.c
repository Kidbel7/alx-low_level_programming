#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of pointers to the arguments
 * Return: NULL if fail, a pointer to the string otherwise
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, l;

	if (ac == 0 || av == NULL)
		return (NULL);
	l = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			l++;
		l++;
	}
	l++;

	s = malloc(sizeof(char) * l);
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}
	s[k] = '\0';
	return (s);
}
