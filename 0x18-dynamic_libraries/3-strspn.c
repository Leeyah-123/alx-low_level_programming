#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: String
 * @accept: Substring
 *
 * Return: Integer
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, flag;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		flag = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	return (i);
}
