#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return number elements in linked list
 * @h: pointer
 *
 * Return: nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
