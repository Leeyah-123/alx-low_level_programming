# include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char letter = 'a';

	while (times < 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		putchar('\n');
		times++;
	}
}
