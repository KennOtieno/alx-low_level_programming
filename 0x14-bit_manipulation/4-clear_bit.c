#include "main.h"

/**
 * clear_bit - set value of bit at index
 * @n: pointer to bit
 * @index: index to set the value
 *
 * Return: if error -1 otherwise 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
