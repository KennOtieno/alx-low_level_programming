#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print data of the dog
 * @d: dog structure
 *
 * Return: none
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)";
				}
				}
