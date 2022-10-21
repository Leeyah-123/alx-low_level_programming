#include "main.h"

/**
 * print-diagonal - Prints a diagonal line
 * @n: An integer
 *
 * Return: no return
 */

void print_diagonal(int n)
{
	int num, inner_num;

	for (num = 0; num < n; num++)
	{
		for (inner_num = 0; inner_num < num; inner_num++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (i < (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
