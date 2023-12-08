#include "lists.h"
/**
 * add_dnodeint_end - add node at the begining
 * @head:  list of nodes
 * @n:  an integer
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *current;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		ptr->prev = NULL;
		*head = ptr;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		ptr->prev = current;
		current->next = ptr;
	}
	return (ptr);
}
