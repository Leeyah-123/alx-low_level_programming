#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: Width of array
 * @height: Height of array
 *
 * Return: Pointer to 2 dimensional array of integer
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **) malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		int *q;

		q = (int *) malloc(sizeof(int *) * width);
		if (q == NULL)
		{
			free(p);
			return (NULL);
		}
		*(p + i) = (int *) malloc(sizeof(int) * width);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
