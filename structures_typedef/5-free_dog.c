#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - frees dogs
 * @d: pointer struct dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
