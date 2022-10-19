# include "main.h"

/**
 * add - Adds two integers
 *
 * Returns: Integer
 */

int add(int a, int b)
{
	int sum;

	sum = a + b;
	if (sum < 10)
	{
		_putchar('0' + sum);
		return sum;
	}
	else
	{
		_putchar('0' + (sum / 10));
		_putchar('0' + (sum % 10));
		return sum;
	}
	
}
