# include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: n is an integer
 *
 * Return: Integer
 */

int print_last_digit(int n)
{
	_putchar('0' + (n % 10));
	return (n % 10);
}
