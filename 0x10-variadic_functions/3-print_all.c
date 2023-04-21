#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all- output everything
 * @format: list the types of parameters passed into function
 * @...: input value for variable parameter
 */

void print_all(const char * const format, ...)
{
	int j = 0;
	char *string;
	char *separator = "";

	va_list content;

	va_start(content, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", separator, va_arg(content, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(content, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(content, double));
					break;
				case 's':
					string = va_arg(content, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					j++;
					continue;
			}
			separator = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(content);
}

