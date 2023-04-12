#include "main.h"
#include <stdlib.h>

/**
 * str_concat - entry point of function
 * @s1: input value
 * @s2: input value
 * Return: concatenation of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *strcat;
	int i = 0;
	int j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	strcat = malloc(sizeof(char) * (i + j + 1));
	if (strcat == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		strcat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		strcat[i] = s2[j];
		i++;
		j++;
	}
	strcat[i] = '\0';
	return (strcat);
}


