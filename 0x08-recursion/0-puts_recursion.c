#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: String to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*(s + 1) == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s + 1);
}
