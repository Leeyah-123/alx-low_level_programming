#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a character
 * @args: Variadic argument list
 *
 * Return: void
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer
 * @args: Variadic argument list
 *
 * Return: void
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float
 * @args: Variadic argument list
 *
 * Return: void
 */

void print_float(va_list args)
{
	float arg;

	arg = va_arg(args, double);
	printf("%f", arg);
}

/**
 * print_string - Prints a string
 * @args: Variadic argument list
 *
 * Return: void
 */

void print_string(va_list args)
{
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

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
	types t[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	char *separator = "";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != t[j].type))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			t[j].func(args);
			separator = ", ";
		}

		i++;
	}

	va_end(args);
	printf("\n");
}
