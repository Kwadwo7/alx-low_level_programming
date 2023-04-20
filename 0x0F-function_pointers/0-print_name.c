#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - output a name using a function pointer
 * @name: string added
 * @f: funtion pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
