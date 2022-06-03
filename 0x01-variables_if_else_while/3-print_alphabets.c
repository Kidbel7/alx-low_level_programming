#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * and then in upper case.
 */
int main(void)
{
	char alph_l;
	char alph_u;

	for (alph_l = 'a'; alph_l <= 'z'; alph_l++)
	{
		putchar(alph_l);
	}
	for (alph_u = 'A'; alph_u <= 'Z'; alph_u++)
	{
		putchar(alph_u);
	}
	putchar('\n');
	return (0);
}
