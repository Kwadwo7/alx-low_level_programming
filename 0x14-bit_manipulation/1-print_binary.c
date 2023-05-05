#include "main.h"

/**
 * print_binary - prints the equivalent binary of a decimal
 * @n: number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	int k;
	int len = 0;
	unsigned long int present;

	for (k = 63; k >= 0; k--)
	{
		present = n >> i;
		if (present & 1)
		{
			_putchar('1');
			len++;
		}
		else if (len)
			_putchar('0');
	}
	if (!len)
		_putchar('0');
}
