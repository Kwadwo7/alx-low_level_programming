#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - entry point to the function
 * @size: size of the array
 * @c: input value of char
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *prt;

	prt = malloc(sizeof(char) * size);
	if (size == 0 || prt == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		prt[i] = c;
	}
	return (prt);
}
