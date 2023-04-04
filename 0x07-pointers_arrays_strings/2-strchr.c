#include "main.h"
#include <string.h>

/**
 * _strchr - function entry point
 * @s:main string
 * @c: sub string
 * Return: ref
 */

char *_strchr(char *s, char c)
{
	char *ref = strchr(s, c);

	return (ref);
}
