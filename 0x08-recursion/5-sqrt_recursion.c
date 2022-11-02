#include "main.h"

/**
 * find_sqrt - Finds the square root of a number
 * @n: Integer
 * @sqrt: Integer
 *
 * Return: Integer
 */

int find_sqrt(int n, long int sqrt)
{
	if (sqrt > 2147483647)
		return (-1);
	if (sqrt * sqrt == n)
		return (sqrt);
	return (find_sqrt(n, sqrt + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Integer
 *
 * Return: The square root of n
 */

int _sqrt_recursion(int n)
{
	long int sqrt = 0;

	return (find_sqrt(n, sqrt));
}
