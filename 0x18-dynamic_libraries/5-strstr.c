#include "main.h"
#include <string.h>
/**
 * _strstr - finds the first occurence of needle in haystack
 * @haystack: the main c string
 * @needle: the string to scanned in haystack
 * Return: str
 */

char *_strstr(char *haystack, char *needle)
{
	char *str = strstr(haystack, needle);

	return (str);
}
