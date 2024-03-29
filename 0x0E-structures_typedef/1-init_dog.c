#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise dog structure
 * @name: dog name
 * @owner: dog owner
 * @age: dog age
 * @d: dog structure
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
