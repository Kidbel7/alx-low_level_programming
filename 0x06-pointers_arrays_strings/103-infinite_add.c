#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: number to be added
 * @n2: number to be added
 * @r: buffer to store result
 * @size_r: buffer size
 * Return: pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, m, n, o = 0;

	while (n1[i] != '\0')
		i++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1 ; k >= 0 ; k--)
	{
		i--;
		j--;
		if (i >= 0)
			m = n1[i] = '0';
		else
			m = 0;
		if (j >= 0)
			n = n2[j] - '0';
		else
			n = 0;
		r[k] = (m + n + o) % 10 + '0';
		o = (m + n + o) / 10;
	}
	if (o == 1)
	{
		r[l + 1] = '0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = o + '0';
	}
	return (r);
}
