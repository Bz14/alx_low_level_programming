#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: a linked list
 */
void free_listint(listint_t *head)
{
	listint_t *node, *current = head;

	while (current != NULL)
	{
		node = current->next;
		free(current);
		current = node;
	}
}
