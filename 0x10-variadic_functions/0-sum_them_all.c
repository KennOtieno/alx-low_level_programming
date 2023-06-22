#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of parameters
 * @...: variable of parameters
 * @n: number of parameters
 *
 * Return: none
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
