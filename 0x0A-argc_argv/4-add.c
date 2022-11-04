#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the name of a programme followed by a new line
 * @argc: Number of arguments passed to program
 * @argv: Arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, num;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			num = atoi(argv[i]);
			if (num == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += num;
		}
		printf("%d\n", sum);
	}

	return (0);
}

