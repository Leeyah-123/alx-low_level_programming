#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 * @size: Size of the array
 * @c: Character
 *
 * Return: Character pointer
 */

char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
		return (NULL);
	char *p = (char *) malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + 1) = c;
	return (p);
}
