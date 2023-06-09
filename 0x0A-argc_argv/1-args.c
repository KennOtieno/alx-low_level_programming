#include "main.h"
#include <stdio.h>

/**
 * main - print args number
 * @argv: vector
 * @argc: count
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
