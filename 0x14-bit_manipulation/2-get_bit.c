#include "main.h"

/**
 * get_bit - get value of bit in index
 * @n: bit
 * @index: index to get value
 *
 * Return: if error -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
