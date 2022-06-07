#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	unsigned long int i, j, k, l, m, n, o;

	j = 1;
	k = 2;

	printf("%ld", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %ld", k);
		k = k + j;
		j = k - j;
	}
	l = j / 1000000000;
	m = j % 1000000000;
	n = k / 1000000000;
	o = k % 1000000000;

	for (i = 92; i < 99; i++)
	{
		printf(", %ld", n + (o / 1000000000));
		printf("%ld", o % 1000000000);
		n = n + l;
		l = n - l;
		o = o + m;
		m = o - m;
	}
	printf("\n");
	return (0);
}
