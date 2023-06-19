#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - for structure dog free memory
 * @d: dog structure
 *
 * Return: none
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
