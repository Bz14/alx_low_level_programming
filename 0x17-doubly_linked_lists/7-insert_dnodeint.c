#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at index
 * @h:  singly linked list
 * @idx: index to be searched
 * @n: data of the node
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *current = *h;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->prev = NULL;
		node->next = *h;
		if (*h != NULL)
			(*h)->prev = node;
		*h = node;
		return (node);
	}
	while (idx > 0 && current != NULL)
	{
		current = current->next;
		idx--;
	}
	if (idx > 0)
	{
		free(node);
		return (NULL);
	}
	node->prev = current->prev;
	node->next = current;
	if (current->prev != NULL)
		current->prev->next = node;
	current->prev = node;
	return (node);
}
