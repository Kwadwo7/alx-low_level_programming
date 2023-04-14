#include "main.h"
#include <stdlib.h>

/**
 * constant - fills memory
 * @a: filled area of memory
 * @b: copied character
 * @c: number of times b is copied
 * Return: pointer
 */

char *constant (char *a, char b, unsigned int c)
{
	unsigned int i;

	for (i = 0; i < c; i++)
	{
		a[i] = b;
	}
	return (a);
}

/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: input value for number of elements
 * @size: input value for size of byte
 * Return: pointer to the array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *calloc;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	calloc = malloc(nmemb * size);

	if (calloc == NULL)
	{
		return (NULL);
	}
	else
	{
		constant(calloc, 0, nmemb * size);
	}
	return (calloc);
}
