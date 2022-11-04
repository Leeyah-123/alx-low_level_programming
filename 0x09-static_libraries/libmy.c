#include "main.h"
#include <stdio.h>

/**
 * _putchar - Prints a character
 *
 * Return: 0
 */

int _putchar(char c)
{
	putchar(c);

	return (0);
}

/**
 * _islower - Checks for lowercase character
 * @c: c is an ascii character
 *
 * Return: Integer
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

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

/**
 * _abs - Prints the absolute value of an integer
 * @n: n is an integer
 *
 * Return: integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}

/**
 * _isupper - Checks for uppercase character
 * @c: c is an ascii value
 *
 * Return: 1 if c is uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}

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

/**
 * _strlen - Returns the length of a string
 * @s: A valid character pointer
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int index;

	index = 0;
	while (s[index] != '\0')
	{
		index++;
	}

	return (index);
}

/**
 * _puts - Prints a string to stdout
 * @str: A string
 *
 * Return: void
 */

void _puts(char *str)
{
	printf("%s\n", str);
}

/**
 * _strcpy - copies a string into a buffer
 * @dest: destination
 * @src: source
 *
 * Return: The pointer to dest;
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}

int _atoi(char *s)
{
	int c, sign, offset, n;

	if (s[0] == '-')
		sign = -1;

	if (sign == -1)
		offset = 1;
	else
		offset = 0;

	n = 0;

	for (c = offset; s[c] != '\0'; c++)
		n = n * 10 + s[c] - '0';

	if (sign == -1)
		n = -n;
	return (n);
}

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}

/**
 * _strncat - Concatenates two strings
 * @dest: A string
 * @src: A string
 * @n: An integer
 *
 * Return: A string pointer
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 < n)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}

/**
 * _strncpy - Copies a string
 * @dest: A string pointer
 * @src: A string pointer
 * @n: An integer
 *
 * Return: A string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: An integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, op = 0;

	while (op == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		op = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (op);
}

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory address
 * @b: Memory address
 * @n: An integer
 *
 * Return: A character pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}

	return (s);
}

/**
 * _memcpy - Copies memory area
 * @dest: Destination
 * @src: Source
 * @n: Amount of bytes to be copied
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, src_len = 0;

	while ((*(src + src_len)) != '\0')
		src_len++;

	for (i = 0; i <= src_len; i++)
	{
		if (i >= n)
			break;
		*(dest + i) = *(src + i);
	}

	return (dest);
}

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to string
 * @c: Character to be found
 *
 * Return: Pointer to first occurence of c
 */

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}

	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}

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

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be searched
 * @accept: Bytes to be searched for
 *
 * Return: First occurence of any byte from accept in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}

	return ('\0');
}

/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: Substring
 *
 * Return: Location of substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return ('\0');
}
