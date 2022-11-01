#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: Bytes to be searched for
 *
 * Return: First occurence of any byte from accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, flag;

	flag = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				flag = 1;
				break;
			}
		}
	}

	if (flag == 0)
		return ('\0');
	return (s + i);
}
