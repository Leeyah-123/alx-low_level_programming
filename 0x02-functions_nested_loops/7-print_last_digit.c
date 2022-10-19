# include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: n is an integer
 *
 * Return: Integer
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (n < 0)
		last = last * -1;

	_putchar('0' + last);
	return (last);
}
