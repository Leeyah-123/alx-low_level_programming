#include "main.h"
#include <stdlib.h>

/**
 * fizz_buzz - Prints 1 to 100
 *
 * Return: void
 */

void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else if ((i % 3) == 0)
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
		}
		else if ((i % 5) == 0)
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		if (i != 100)
			_putchar(' ');	
	}
}
