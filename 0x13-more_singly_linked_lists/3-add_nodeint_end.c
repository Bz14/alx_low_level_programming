#include "lists.h"

/**
 * add_nodeint_end - add node at the begining
 * @head:  list of nodes
 * @n:  an integer
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *current;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	if (*head == NULL)
		*head = ptr;
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = ptr;
	}
	return (ptr);
}
