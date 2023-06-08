#include "main.h"

/**
 * _pow_recursion - return value x raised to power y
 * y: times to multiply the value
 * x: value to be multiplied
 *
 * return: value multiplied y times
 */
int _pow_recursiion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return(1);
	return (x * _pow_recursion(x, y - 1));
}
