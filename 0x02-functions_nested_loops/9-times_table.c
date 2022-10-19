# include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int time;
	int index;
	int result;

	for (time = 0; time < 10; time++)
	{
		for (index = 0; index < 10; index++)
		{
			result = time * index;
			
			if (result >= 10)
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
				_putchar(' ');
			}
			else
			{
				_putchar('0' + result);
			}

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
