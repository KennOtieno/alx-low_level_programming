#include "main.h"
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print arguments
 * @argv: vector
 * @argc: count
 *
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int a;
	unsigned int b, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (a = 1; b < strlen(c); b++)
		{
			c = argv[a];

			for (b = 0; b < strlen(c); b++)
			{
				if (c[b] < 48 || c[b] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(c);
			c++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
