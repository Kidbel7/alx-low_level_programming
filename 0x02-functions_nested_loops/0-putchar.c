#include <stdio.h>

/**
 * main - print _putchar
 * Return: 0
 */

int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		putchar(c[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
