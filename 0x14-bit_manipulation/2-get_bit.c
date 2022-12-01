#include "main.h"

/**
 * get_bit - Returns the value of the bit at index "index"
 * @n: Number to be checked
 * @index: Index of bit
 *
 * Return: Value of bit at index "index"
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
			return (n & 1);
	}

	return (-1);
}
