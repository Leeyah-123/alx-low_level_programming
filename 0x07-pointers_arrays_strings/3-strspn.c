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
	unsigned int length = 0;
	int flag = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == 32)
			break;
		for (; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				flag = 1;
				length++;
			}
		}
		if (flag == 0)
			break;
		flag = 0;
	}
	return (length);
}
