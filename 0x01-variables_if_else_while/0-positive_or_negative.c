#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 * Returns: Always 0 (success)
 */
int main(int n)
{
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n < 0)
	{
		printf("is negative\n");
	}
	else
		printf("is zero\n");
	return (0);
}
