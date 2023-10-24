#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head:  singly linked list
 * @index: index to be searched
 * Return: a node at the index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);

	while (current->next != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (NULL);
}
