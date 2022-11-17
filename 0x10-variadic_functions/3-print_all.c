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
	char arg;

	arg = va_arg(args, int);
	printf("%c", arg);
}

/**
 * print_int - Prints an integer
 * @args: Variadic argument list
 *
 * Return: void
 */

void print_int(va_list args)
{
	int arg;

	arg = va_arg(args, int);
	printf("%d", arg);
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
	int flag;

	va_start(args, format);
	while (format[i])
	{
		j = 0;
		flag = 0;
		while (j < 4)
		{
			if (format[i] == t[j].type)
			{
				t[j].func(args);
				flag = 1;
			}
			j++;
		}

		if (format[i + 1] && flag == 1)
			printf(", ");
		i++;
	}

	va_end(args);
	printf("\n");
}
