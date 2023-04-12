#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry point for function
 * @width: input value
 * @height: input value
 * Return: pointer for success
 */

int **alloc_grid(int width, int height)
{
	int **len;
	int a;
	int b;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	len = malloc(sizeof(int *) * height);

	if (len == NULL)
	{
		return (NULL);
	}
	for (a = 0; x < height; a++)
	{
		len[a] = malloc(sizeof(int) * width);

		if (len[a] == NULL)
		{
			for (; a >= 0; a--)
				free(len[a]);
			free(len);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			len[a][b] = 0;
	}
	return (mee);
}
