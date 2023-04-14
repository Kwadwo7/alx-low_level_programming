#include "main.h"
#include <stdlib.h>

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

	for (i = 0; s1[i]; i++)
	{
		len1++;
	}
	for (j = 0; s2[j]; j++)
	{
		len2++;
	}
	for (k = 0; k < len2; k++)
	{
		s1[len1 + k] = s2[k];
	}
	concat = malloc(sizeof(*concat) * n);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (m = 0; m <= (len1 + len2); m++)
	{
		/*if (n >= len2)
		{
			concat[m] = s1[m];
		}*/
		 if (m <= (len1 + n) && n < len1)
		{
			concat[m] = s1[m];
		}
	}
	concat = '\0';
	return (concat);
}

