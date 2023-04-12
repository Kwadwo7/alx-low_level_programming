#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - entry point fo function
 * @grid: input value
 * @height: input value
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}
	free(grid);
}
