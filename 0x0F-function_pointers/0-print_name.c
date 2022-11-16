#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name to be printed
 * @f: Format for printing of name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
