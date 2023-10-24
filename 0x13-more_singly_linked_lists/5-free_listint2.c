#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: a linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *current = *head;

	if (head == NULL || *head == NULL)
		return;
	while (current != NULL)
	{
		node = current->next;
		free(current);
		current = node;
	}
	free(*head);
	*head = NULL;
}
