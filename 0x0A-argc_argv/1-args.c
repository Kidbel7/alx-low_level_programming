#include <stdio.h>

/**
 * main - prints the number of arguments assed into it
 * @argc: number of commad line arguments
 * @argv: array containing program command line arguments
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
