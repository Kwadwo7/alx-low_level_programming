#include "main.h"

/**
 * factorial - entry point of function
 * @n: input value
 * Return: factorial of n for success
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
