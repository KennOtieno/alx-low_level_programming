#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - memory allocated
 * @b: size to be allocated
 *
 * Return: none
 */

{
	void *p;
	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
