#include "main.h"
/**
 * reverse_array - Reverses an array
 * @a: The array
 * @n: An integer
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int count = 0, i;

	while(a[count])
		count++;

	for (i = 0; i <= count; i++)
	{
		temp = *(a + i);
		*(a + i) = *(a + count - i);
		*(a + count - i) = temp;
	}
}
