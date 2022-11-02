#include "main.h"

/**
 * find_prime - Checks if a number is a prime number
 * @n: Integer
 * @n2: Integer
 *
 * Return: Integer
 */

int find_prime(int n, int n2)
{
	if (n2 < 2)
		return (1);
	if ((n2 != 1 && n % n2 == 0) || n <= 1)
		return (0);
	return (find_prime(n, n2 - 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number
 * @n: Input integer
 *
 * Return: Integer
 */

int is_prime_number(int n)
{
	int n2 = n - 1;

	return (find_prime(n, n2));
}
