#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: Minimum integer
 * @max: Maximum integer
 *
 * Return: Pointer to the array of integers
 */

int *array_range(int min, int max)
{
	int *p;
	int i, len;

	if (min > max)
		return (NULL);

	p = malloc(max - min + 1);

	if (p == NULL)
		return (NULL);

	for (len = min, i = 0; len <= max; len++, i++)
		p[i] = len;

	return (p);
}
