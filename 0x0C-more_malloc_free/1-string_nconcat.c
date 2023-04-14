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
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int i;
	unsigned int j;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)

	for (length2 = 0; s2[length2] != '\0'; length2++)

	if (n > length2)
		n = length2;
	i = length1 + n;
	concat = malloc(i + 1);
	if (concat == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
		if (j < length1)
			concat[i] = s1[j];
		else
			concat[i] = s2[j - length1];

	concat[j] = '\0';

	return (concat);
}
