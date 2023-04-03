#include "main.h"
#include <string.h>

/**
 * _memcpy - copies characters from memory to another memory area
 * @dest: pointer to receive characters
 * @src: pointer from which characters are copied
 * @n: number of characters to be copied
 * Return: dest for success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
