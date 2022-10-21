#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * Return: void
 */

void print_line(int n)
{
	if (n >= 0)
	{
		for (i = 0; i <= n; i++)
			_putchar(95);
	}
	_putchar('\n');
}