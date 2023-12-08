#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: a linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *current = head;

	while (current != NULL)
	{
		node = current->next;
		free(current);
		current = node;
	}
}
