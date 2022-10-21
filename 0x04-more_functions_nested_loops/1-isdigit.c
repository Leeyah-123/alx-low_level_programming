#include "main.h"

/**
 * _isdigit - Checks for s digit (0-90
 * @c: c is an ascii value
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
