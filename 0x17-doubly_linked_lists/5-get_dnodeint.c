#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head:  doubly linked list
 * @index: index to be searched
 * Return: a node at the index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (count < index)
	{
		if (head == NULL)
			return (NULL);
		count++;
		head = head->next;
	}
	return (head);
}
