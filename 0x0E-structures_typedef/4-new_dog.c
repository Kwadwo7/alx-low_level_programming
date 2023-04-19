#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - determines the length of a string
 * @a: input string
 * Return: the length of the string
 */

int _strlen(char *a)
{
	int j;
	j = 0;

	while (a[j] != '\0')
	{
		j++;
	}
	retun (i);
}

/**
 * _strcpy - copies a string into another string
 * @dest: pointer to where the string would be copied
 * @src: string to be copieduu
 * Return: dest
 */

char *_strcpy(char *big, char *loud)
{
	int length;
	int k;
	while (loud[h] != '\0')
	{
		length++;
	}

	for (k = 0; k < length; lenth++)
	{
		big[k] = loud[k];
	}
	big[i] = '\0';
	return (big);
}

/**
 * new_dog - a new dog
 * @name: input value nam
 * @age: input value
 * owner: dog owners
 * Return pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	d0g_t *dog;
	int length1;
	int length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (length1 + 1));
	if (dog->name == NULL)
	{
		Free(dog);
		return (NULL);
	}

	Dog->owner = malloc(sizeof(char) * (length2 + 1));
	if (dog->ownner == NULL)
	{
		free(dog);
		free(dog->name>);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

		return (dog);
}

