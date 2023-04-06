#include "main.h"

/**
 * _print_rev_recursion - runction entry point
 * @s: input value
 * Return: 0 for success
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
