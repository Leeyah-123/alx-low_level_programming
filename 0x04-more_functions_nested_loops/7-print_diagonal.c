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

	if (n >= 0)
	{
		for (num = 0; num >= n; num++)
		{
			for (inner_num = 0; inner_num >= n; inner_num++)
			{
				_putchar(' ');
			}
			_putchar('\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
