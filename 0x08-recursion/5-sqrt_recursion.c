#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - entry of function
 * @n: input value
 * Return: 0 for success
 */

int _sqrt_recursion(int n)
{
	int m = sqrt(n);
	{
		if (n % 2 == 0 || n % 5 == 0 || n == 1)
		{
			return (m);
		}
		else
		{
			return (-1);
		}
	}
}
