#include "main.h"
/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: An integer
 */

int _strcmp(char *s1, char *s2)
{
	int l1 = 0, l2 = 0;

	while (s1[l1] != '\0')
		l1++;

	while (s2[l2] != '\0')
		l2++;

	if (l1 > l2)
		return (15);
	else if (l2 > l1)
		return (-15);
	else
		return (0);
}
