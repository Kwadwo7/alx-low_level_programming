#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - entry of function
 * @str: input value
 * Return: pointer for success or NULL for error
 */

char *_strdup(char *str)
{
	char *other_string;
	unsigned int j = 0;
	unsigned int length = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
		length++;
	other_string = malloc(sizeof(char) * (length + 1));
	if (other_string == NULL)
	{
		return (NULL);
	}
	while ((duplicate[j] = str[j]) != '\0')
	j++;
return (other_string);
}
