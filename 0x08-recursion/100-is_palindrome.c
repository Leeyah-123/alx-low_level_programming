#include "main.h"

/**
 * get_length - Finds the length of a string
 * @s: Input string
 *
 * Return: length of string
 */
int get_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (get_length(s + 1) + 1);
}

/**
 * palindrome - Checks if a string is a palindrome
 * @s: Input string
 * @i: Current index
 *
 * Return: Integer
 */

int palindrome(char *s, int i)
{
	int l = get_length(s);
	int l2 = l - 1;

	if (l % 2 == 0 && (i + 1) > (l / 2))
		return (1);

	if (*(s + i) == *(s + (l2 - i)))
	{
		if ((l % 2 != 0) && ((i + 1) == l / 2))
			return (1);
		return (palindrome(s, i + 1));
	}
	return (0);
}

/**
 * is_palindrome - Returns 1 if input string is a palindrome and 0 if not
 * @s: Input string
 *
 * Return: Integer
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (palindrome(s, 0));
}
