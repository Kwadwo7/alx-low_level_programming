#include "function_pointers.h"

/**
 * int_index -  returns the index of the element which cmp does not return 0
 * @array: pointer to an array
 * @cmp: function pointer
 * @size: number of elements in array
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
		{
			return (k);
		}
	}
	return (-1);
}
