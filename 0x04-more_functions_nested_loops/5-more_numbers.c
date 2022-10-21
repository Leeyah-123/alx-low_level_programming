#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int num, ch;

	for (num = 0; num <= 10; num ++)
	{
		for (ch = 48; ch < 63; ch++)
		{
			if (ch >= 10)
				_putchar((ch / 10) + 48));
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}
