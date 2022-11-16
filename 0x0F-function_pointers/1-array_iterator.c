#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Array
 * @size: Size of the array
 * @action: Function to be executed on the array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
