#include "main.h"
#include <string.h>

/**
 * _strpbrk - the function
 * @s: the main string
 * @accept: the substring
 * Return: brk
 */

char *_strpbrk(char *s, char *accept)
{
	char *brk = strpbrk(s, accept);

	return (brk);
}
