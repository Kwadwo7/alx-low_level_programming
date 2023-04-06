#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - runction entry point
 * @s: input value
 * Return: 0 for success
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s);
	int loop;

	for (loop = len - 1; loop >= 0; loop--)
	{
		putchar(s[loop]);
	}
}
