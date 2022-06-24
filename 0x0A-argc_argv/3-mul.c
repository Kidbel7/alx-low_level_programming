#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of multiplication of two numbers
 * @argc: number of command line arguments
 * @argv: array containing program command line arguments
 * Return: 0 if two arguments reveived, 1 if not
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
