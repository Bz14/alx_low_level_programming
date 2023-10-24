#include "lists.h"
/**
 * reverse_listint - reverse linked list
 * @head: singly linked list
 * Return: the head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *previous;

	if (head == NULL || *head == NULL)
		return (NULL);
	if (current->next == NULL)
		return (*head);
	current = *head;
	previous = NULL;
	while (current != NULL)
	{
		*head = current;
		current = current->next;
		(*head)->next = previous;
		previous = *head;
	}
	return (*head);
}
