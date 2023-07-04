#include "lists.h"

/**
 * get_nodeint_at_index - returns node at certain index in linked list
 * @head: first node in linked list
 * @index: index of node to return
 *
 * Return: pointer to node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}

	return (temp ? temp : NULL);
}
