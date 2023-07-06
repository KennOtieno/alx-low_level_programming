#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: print character
 *
 * Return: in success 1
 * in error, -1 returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
