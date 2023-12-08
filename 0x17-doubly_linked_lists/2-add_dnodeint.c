#include "lists.h"
/**
 * add_dnodeint - add node at the begining
 * @head:  list of nodes
 * @n:  an integer
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	if (*head != NULL)
		(*head)->prev  = ptr;
	*head = ptr;
	return (ptr);
}
