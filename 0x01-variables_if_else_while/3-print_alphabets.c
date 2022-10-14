#include <stdio.h>
/**
 * main - Prints alphabets in uppercase and lowercase
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	char a, b;

	for (a = 'a'; a <= 'z'; ++a)
		putchar(a);
	for (b = 'A'; b <= 'Z'; ++b)
		putchar(b);
	putchar('\n');
	return (0);
}
