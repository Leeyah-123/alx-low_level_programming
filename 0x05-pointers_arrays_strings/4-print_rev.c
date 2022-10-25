#include "main.h"
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse
 * @s: A string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
		index++;

	index -= 1;
	while (index >= 0)
		putchar(s[index]);
	putchar('\n');
}
