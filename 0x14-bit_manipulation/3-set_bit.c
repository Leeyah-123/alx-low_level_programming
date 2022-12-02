#include "main.h"

/**
 * set_bit - Sets the value of a bit at a particular index to one
 * @n: Pointer to integer
 * @index: Index of bit
 *
 * Return: 1 (Success), -1 (Error)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
