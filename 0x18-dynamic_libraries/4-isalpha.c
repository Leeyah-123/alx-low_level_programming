# include "main.h"

/**
 * _isalpha - Checks if c is a letter, lowercase or uppercase
 * @c: c is an ascii character
 *
 * Return: integer
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
