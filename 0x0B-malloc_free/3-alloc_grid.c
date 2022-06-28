#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * Return: NULL on failure or if width or hight is 0 or negative,
 * a pointer to the array of integers otherwise
 */

int **alloc_grid(int width, int height)
{
	int **i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = (int **) malloc(height * sizeof(int *));

	if (i == NULL)
		return (NULL);

	for (j = 0; j < height; j++)
	{
		i[j] = malloc(width * sizeof(int));
		if (i[j] == NULL)
		{
			while (j >= 0)
			{
				free(i[j]);
				j--;
			}
			free(i);
			return (NULL);
		}
	}
	return (i);
}

