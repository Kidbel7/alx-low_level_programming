#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: 0 (Success)
 */

int main(void)
{
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	for (i > n)
	{
	for (i = 0; i <= 9; i++)
	{
		putchar(n + '0');
		putchar (i + '0');

	if (!(n == 9 && i == 9))
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
