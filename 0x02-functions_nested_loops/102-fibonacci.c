#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int a;
	long int i, j, k;

	i = 1;
	j = 2;
	printf("%ld, %ld", i, j);
	for (a = 0; a < 48; a++)
	{
		k = i + j;
		printf(", %ld", k);
		i = j;
		j = k;
	}
	printf("\n");
	return (0);
}
