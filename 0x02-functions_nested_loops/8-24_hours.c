# include "main.h"

/**
 * jack_bauer: Prints each minute of the day
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
			if (hour < 10)
				putchar('0' + 0);

			putchar('0' + hour);
			putchar(':');

			if (minute < 10)
				putchar('0' + 0);

			putchar('0' + minute);

			minute++;
		}

		putchar('\n');
		hour++;
		minute = 0;
	}
}
