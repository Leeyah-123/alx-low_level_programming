#include <stdio.h>
#include <stdlib.h>

/**
 * calc_change - Calculate the minimum number of coins needed to make change
 * @cents: Amount of money
 * @change: Change
 *
 * Return: Number of change
 */

int calc_change(int cents, int change)
{
	int next;

	if (cents == change)
		return (1);
	if (cents < change)
	{
		if (change == 25)
			next = 10;
		else if (change == 10)
			next = 5;
		else if (change == 5)
			next = 2;
		else
			next = 1;
		return (calc_change(cents, next));
	}

	if ((cents - change) > 0)
		next = change;
	else
	{
		if (change == 25)
			next = 10;
		else if (change == 10)
			next = 5;
		else if (change == 5)
			next = 2;
		else
			next = 1;
	}
	return (calc_change(cents - change, next) + 1);
}

/**
 * main - Prints the minimum number of coins to
 * make change for an amount of money
 * @argc: Number of arguments passed to program
 * @argv: Arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (argv[1][0] == '-')
		printf("0\n");
	else
	{
		printf("%d\n", calc_change(atoi(argv[1]), 25));
	}
	return (0);
}

