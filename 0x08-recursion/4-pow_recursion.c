#include "main.h"
#include <math.h>

/**
 * _pow_recursion - entry of function
 * @x: input value
 * @y: input value
 * Return: power for success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
