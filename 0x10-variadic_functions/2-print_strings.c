#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings, followed by a new line
 * @separator: String to be printed between strings
 * @n: Number of strings to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(strings, char *));

		if (separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
