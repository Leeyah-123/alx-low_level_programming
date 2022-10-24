#include "main.h"
/**
 * swap_int - Swaps the values of two integers
 * @a: A valid integer pointer
 * @b: A valid integer pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
