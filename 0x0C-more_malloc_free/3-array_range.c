#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: NULL if min > max or malloc fails,
 * pointer to the newly created array otherwise
 */

int *array_range(int min, int max)
{
	int *a, i, j;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	a = malloc(sizeof(int) * j);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		a[i] = min++;
	return (a);
}
