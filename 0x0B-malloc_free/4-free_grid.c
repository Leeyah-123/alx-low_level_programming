#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees memory
 * @grid: 2 dimensional array
 * @height: Height of array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
