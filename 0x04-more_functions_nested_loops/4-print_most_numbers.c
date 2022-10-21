#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0-9 excluding 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int ch;

	ch = 48;
	while (ch < 58)
	{
		if ((ch != 50) && (ch != 52))
			_putchar(ch);
		ch++;
	}
}
