#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - output array element
 * @array: argument
 * @size: number of element to output
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (k = 0; k < size; k++)
	{
		action(array[k]);
	}
}
