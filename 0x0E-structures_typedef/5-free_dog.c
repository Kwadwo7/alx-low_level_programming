#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - it frees memory it allocated for a struct dog
 * @d: pointer to the struc  to free
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
