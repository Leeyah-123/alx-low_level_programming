#include "main.h"
#include <stdio.h>

/**
 * _calloc - Allocates memory for an array and initializes it with zero
 * @nmemb: Number of members
 * @size: Size of each element in bytes
 *
 * Return: Void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int i;

	if (nmemb == NULL || size == NULL)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size) ; i++)
	{
		p[i] = 0;
	}

	return (p);
}
