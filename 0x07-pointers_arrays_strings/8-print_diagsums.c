#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function for code entry
 * @a: stores array as integer in memory
 * @size: the size of an array
 * Return: 0 for success
 */

void print_diagsums(int *a, int size)
{
	int f = 0;
	int g = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		f += a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		g += a[i * size + (size - i - 1)];
	}
	printf("%d,  %d\n", f, g);
}
