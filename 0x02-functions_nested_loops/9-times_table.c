# include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int row;
	int column;
	int result;
	int tens;
	int ones;

	for (row = 0; row < 10; row++)
	{
		for (column = 0; column < 10; column++)
		{
			result = row * column;
			tens = result / 10;
			ones = result % 10;

			if (column == 0)
				_putchar('0');
			else if (result < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ones + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
		}
		_putchar('\n');
	}
}
