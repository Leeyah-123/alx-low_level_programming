#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

/**
 * struct structure - Declares the corresponding function to print an argument
 * @type: Type of argument
 * @func: Corresponding function
 *
 * Description: Used for printing arguments
 */

typedef struct structure
{
	char type;
	void (*func)(va_list);
} types;

#endif
