#include " main.h"

/**
 * s: The string to be reverse
 * _print_rev_recursion: print s in reverse
 *
 * return: none
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}

