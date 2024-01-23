#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees struct dog
 * @d: struct freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
