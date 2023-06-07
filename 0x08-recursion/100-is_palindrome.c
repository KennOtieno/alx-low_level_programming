#include "main.h"

/**
 * _strlen_recursion - Retturns length of string.
 * @s: String
 * return: Length of string
 */
int _strlrn_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * comparator - Compares character of string.
 * @n1: Smallest iterator
 * @n2: Biggest iterator
 * return: .
 */
int comparator(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + comparator(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - It detects if string is palindrome
 * @s: String
 * return: If s is palindrome 1, if not 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
