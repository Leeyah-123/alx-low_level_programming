#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Function that prints anything
 * @format: Types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;

	va_start(args, format);
	while (format[i])
	{
		while (j < 4)
		{
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
