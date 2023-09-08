#include "main.h"
#include <string.h>

/**
 * _strspn - returns length of accept in s
 * @s: scanned string
 * @accept: string containing characters to match
 * Return: spn
 */

unsigned int _strspn(char *s, char *accept)
{
	int spn = strspn(s, accept);

	return (spn);
}
