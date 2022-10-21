#include "main.h"

/**
 * mul - Mulitiplies two integers.
 * @a: First integer
 * @b: Second integer
 *
 * Return: The product of a and b
 */

int mul(int a, int b)
{
	if((a > 0 && b > 0) || (a < 0 && b < 0))
		return (a * b);
	else
		return (-(a * b));
}
