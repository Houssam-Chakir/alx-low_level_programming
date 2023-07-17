#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog from memory
 * @d: dog
 *
 * Retrn: nothing
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
