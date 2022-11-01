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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int flag = 0;

	for (; *(s + i) != '\0'; i++)
	{
		flag = 1;
		for (; *(accept + j) != '\0'; j++)
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
