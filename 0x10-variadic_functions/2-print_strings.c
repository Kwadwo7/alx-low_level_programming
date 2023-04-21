#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - output strings followed by a new line
 * @separator: string which is printed
 * @n: number of strings passed as an argument
 * @...: input variable number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	char *string;
	unsigned int j;

	va_start(str, n);

	for (j = 0; j < n; j++)
	{
		string = va_arg(str, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (j != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(str);
}

