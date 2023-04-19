#include <stdlib.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - outputs a string name
 * @d: pointer to struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
