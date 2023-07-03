#include "lists.h"

/**
 * add_nodeint - adds new node in linked list
 * @n: integer
 * @head: pointer
 *
 * Return: none
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
