#include "main.h"

/**
 * is_prime_number - entry of function
 * @n: input value
 * Return: 0 for success
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3 || n == 5 || n == 7)
	{
		return (1);
	}
	else if (n == -1 || n == 1 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}



