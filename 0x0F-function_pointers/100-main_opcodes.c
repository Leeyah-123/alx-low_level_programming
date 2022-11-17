#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints out the opcodes of its main function
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Integer
 */

int main(int argc, char *argv[])
{
	int num, i;
	int (*address)(int, char**) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == (num - 1))
			continue;
		printf(" ");

		address++;
	}

	printf("\n");
	return (0);
}
