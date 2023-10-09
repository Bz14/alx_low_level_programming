#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the mremory allocated for dog
 * @d: a dog struct
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
