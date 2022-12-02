#include "main.h"

/**
 * clear_bit - Sets the bit at the given index to 0
 * @n: Number
 * @index: Index of bit
 *
 * Return: 1 (Success), -1 (Error)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
