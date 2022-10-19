# include "main.h"

/**
 * jack_bauer - Prints each minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minute;

	hour = 0;
	minute = 0;

	while (hour < 24)
	{
		while (minute < 60)
		{
			_putchar('0' + (hour / 10));
			_putchar('0' + (hour % 10));

			_putchar(':');

			_putchar('0' + (minute / 10));
			_putchar('0' + (minute % 10));
			_putchar('\n');

			minute++;
		}

		hour++;
		minute = 0;
	}
}
