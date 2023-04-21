#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - output numbers followed by a new line
 * @separator: string printed between numbers
 * @n: number of integer arguments
 * @...: input variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int j;

	va_start(numbers, n);

	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(numbers, int));
		if (j != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numbers);
}
