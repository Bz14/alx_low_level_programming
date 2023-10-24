#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: a linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL || *head == NULL)
		return;
	while ((*head)->next != NULL)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	free(*head);
	*head = NULL;
}
