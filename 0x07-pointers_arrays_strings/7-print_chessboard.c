#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - multidimensional array
 * @a:input value for array
 */

void print_chessboard(char (*a)[8])
{
	int c;
	int d;

	for (c = 0; c < 8; c++)
	{
		for (d = 0; d < 8; d++)
		{
			printf("%c", a[c][d]);
		}
		printf("\n");
	}
}
