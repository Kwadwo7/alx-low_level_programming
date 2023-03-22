#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lowercase 10 times
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char kw;
	int i;

	i = 0;

	while (i < 10)
	{
		kw = 'a';
		while (kw <= 'z')
		{
			_putchar(kw);
			kw++;
		}
		_putchar('\n');
		i++;
	}
}
