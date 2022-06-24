#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of command line arguments
 * @argv: array containing program command line arguments
 * Return: 0 if pass, 1 otherwise
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	int i, j, k, n = 0;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i <= 0)
	{
		puts("0\n");
		return (1);
	}
	else
	{
		for (j = 0; j < 5; j++)
		{
			k = i / c[j];
			i -= k * c[i];
			n += k;
			if (i == 0)
				break;
		}
	}
	printf("%d\n", n);
	return (0);
}
