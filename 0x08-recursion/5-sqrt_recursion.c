#include "main.h"


int _square_root(int n, int j);

/**
 * _sqrt_recursion - entry of function
 * @n: input value
 * Return: 0 for success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_square_root(n, 0));
}

/**
 * _square_root - entry point of function
 * @n: input value
 * @j: input value
 * Return: square root for success
 */

int _square_root(int n, int j)
{
	int root = j * j;

	if (root > n)
		return (-1);

	else if (root == n)
		return (j);

	else

		return (_square_root(n, j + 1));
}
