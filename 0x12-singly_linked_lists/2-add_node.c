#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - new node
 * @str: string
 * @head: linked list
 *
 * Return: none
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	while (str[length])
		length++;

	temp->str = strdup(str);
	temp->len = length;
	temp->next = *head;
	*head = temp;
	return (temp);
}
