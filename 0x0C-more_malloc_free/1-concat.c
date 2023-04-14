#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *string_nconcat - concatenate string s2 to s1
 * @s1: input string
 * @s2: input string
 * @n: input number of size
 * Return: pointer to the two string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	int i;
	int j;
	unsigned int k;
	char *concat;
	unsigned int m;
	unsigned int l;
	unsigned int p;


	for (i = 0; s1[i]; i++)
	{
		len1++;
	}
	for (j = 0; s2[j]; j++)
	{
		len2++;
	}

	if (n >= len2)
	{
		concat = malloc(sizeof(char) * (len1 + len2 + 1));
		if (concat == NULL)
			return (NULL);
		for (k = 0; k <= len1; k++)
		{
			concat[k] = s1[k];
		}
		for ( l = 0; l <= len2; l++)
		{
			concat[len1 + l] = s2[l];
		}
	}
	else
	{
		concat = malloc(sizeof(char) * (len1 + n + 1));
		if (concat == NULL)
			return (NULL);
		for (m = 0; m <= len1; m++)
		{
			concat[m] = s1[m];
		}
		for (p = 0; p <= n; p++)
		{
			concat[len1 + p] = s2[p];
		}
	}
	concat = '\0';
	return (concat);
}



	int main(void)
	{
		    char *concat;

		        concat = string_nconcat("Best ", "School !!!", 6);
			    printf("%s\n", concat);
			        free(concat);
				    return (0);
	}
