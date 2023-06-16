#include "main.h"
#include <stdlib.h>

/**
 * array_range - ...
 * @max: ...
 * @min: ...
 *
 * Return: value integer
 */
int *array_range(int min, int max)
{
	int *a, b = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[b] = min;
		b++;
		min++;
	}

	return (a);
}
