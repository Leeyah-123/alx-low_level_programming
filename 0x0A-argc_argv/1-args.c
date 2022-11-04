#include <stdio.h>
/**
 * main - Prints the name of a programme followed by a new line
 * @argc: Number of arguments passed to program
 * @argv: Arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[]  __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

