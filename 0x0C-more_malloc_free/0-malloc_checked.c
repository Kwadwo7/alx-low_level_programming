#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 * @b: input value
 * Return: a pointer or terminate with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *allocate_memory;

	allocate_memory = malloc(b);

	if (allocate_memory == NULL)
	{
		exit(98);
	}
	return (allocate_memory);
}
