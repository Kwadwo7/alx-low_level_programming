#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - it initializes a variable of type struch dog
 * @d: it is a pointer to struct dog
 * @mae: variable to be initialize
 * @age: variable to be intialize
 * @owner: member to be initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

