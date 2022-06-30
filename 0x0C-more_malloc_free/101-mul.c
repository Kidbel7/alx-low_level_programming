#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int is_digit(char *s);
int _strlen(char *s);
void errors(void);
int main(int argc, char *argv[]);

/**
 * is_digit - checks if a string contains a non-digit char
 * @s: string
 * Return: 0
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - return length of a string
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main -multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, c, d1, d2, *r, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	r = malloc(sizeof(int) * l);
	if (!r)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		r[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l1] - '0';
		c = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			c += r[l1 + l2 + 1] + (d1 * d2);
			r[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			r[l1 + l2 + 1] += c;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (r[i])
			a = 1;
		if (a)
			_putchar(r[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
