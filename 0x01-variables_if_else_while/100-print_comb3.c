#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: 0 (Success)
 */

int main(void)
{
	int i, n;

	while (n > i)
	{
		for (i = 0; i <= 9; i++)
		{
			for (n = 0; n <= 0; n++)
			{
				putchar(i + '0');
				putchar(n + '0');

				if (!(i == 9 && n == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
