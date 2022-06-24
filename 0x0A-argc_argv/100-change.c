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
	int i, j, k;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	k = 0;
	if (i < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && i >= 0; j++)
	{
		while (i >= c[j])
			;
		{
			k++;
			i -= c[j];
		}
	}
	printf("%d\n", k);
	return (0);
}
