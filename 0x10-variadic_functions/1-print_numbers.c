#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - numbers to be printed
 * @...: number variable
 * @n: numbers passed to function
 * @separator: string to be printed
 *
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int a;

	va_start(nums, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(nums, int));

		if (a != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
