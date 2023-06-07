#include "main.h"
#include <stdio.h>

int is_prime_number(int n, int m);

/**
 * is_prime_number - return if number is prime
 * @n: number to be checked
 *
 * Return: value integer
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - If number is prime check
 * @n: number to be checked
 * @m: the iteration times
 *
 * Return: for prime 1 or 0 composite
 */
int check_prime(int n, int m)
{
	if (n <= 1)
		return (0);

	if (n % m == 0 && m > 1)
		return (0);

	if ((n / m) < m)
		return (1);

	return (check_prime(n, m + 1));
}
