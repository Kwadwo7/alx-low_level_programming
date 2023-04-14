#include "main.h"
#include <stdlib.h>

/**
 * _realloc - memory block is reallocated
 *  @ptr: pointer to the memory block allocated previously
 *  @old_size: size of the old allocated space
 *  @new_size: size of the new allocated space
 *  Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}

