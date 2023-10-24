#include "lists.h"
/**
 * pop_listint - remove the first node
 * @head:  list of nodes
 * Return: the value of the deleted node
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *current;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	current = (*head)->next;
	(*head)->next = NULL;
	*head = current;
	return (n);
}
