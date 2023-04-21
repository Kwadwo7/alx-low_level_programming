#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum parameters and return the results
 * @n: the number of arguments passed
 * @...: input variable number of parameters
 * Return: sum or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list add;
	unsigned int j;
	int total;

	total = 0;

	va_start(add, n);

	for (j = 0; j < n; j++)
	{
		total += va_arg(add, int);
	}
	va_end(add);
	return (total);
}
