#include "function_pointers.h"

/**
 * print_name - print name
 * @f: pointer to function
 * @name: string to print
 *
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
