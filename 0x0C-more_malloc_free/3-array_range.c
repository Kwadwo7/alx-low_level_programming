#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers
 * @min: minimum input value
 * @max: maximum input value
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		array[i] = min++;
	}
	return (array);
}
