#include "main.h"
#include <string.h>

/**
 * _memset - function for memset
 * @s: pointer to the block of memory to fill
 * @b: the value to fill the block of memory
 * @n: the number of bytes to be set to the value
 * Return: s for success
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
