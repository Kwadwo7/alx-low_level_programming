#include "main.h"
#include <stdlib.h>

/**
 * argstostr - entry point of function
 * @ac: input value
 * @av: input value
 * Return: 0 for success
 */

char *argstostr(int ac, char **av)
{
	char *args;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			k++;
		}
	}
	k += ac;
	args = malloc(sizeof(char) * (k + 1));
	if (args == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			args[l] = av[i][j];
			l++;
		}
		if (args[l] == '\0')
		{
			args[l++] = '\n';
		}
	}
	return (args);
}
