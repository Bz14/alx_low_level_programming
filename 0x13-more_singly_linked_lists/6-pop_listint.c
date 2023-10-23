#include "lists.h"
/**
 * pop_listint - remove the first node
 * @head:  list of nodes
 * Return: the value of the deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current = *head;

	if (*head == NULL)
		return (0);
	n = current->n;
	current->next = NULL;
	return (n);
}
