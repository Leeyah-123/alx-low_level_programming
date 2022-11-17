#include "3-calc.h"

/**
 * op_add - Returns the sum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Returns the product of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the dividend of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Dividend of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Returns the modulus of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Remainder of a and b after a division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
