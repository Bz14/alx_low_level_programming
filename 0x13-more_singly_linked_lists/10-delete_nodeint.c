#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head:  singly linked list
 * @index: index to be searched
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *current;
	unsigned int count = 0;

	if (!head || *head == NULL)
		return (-1);
	if (!index)
	{
		(*head)->next = NULL;
		(*head) = NULL;
		return (1);
	}
	current = *head;
	while (current)
	{
		if (count == index - 1)
		{
			node = current->next;
			current->next = node->next;
			return (-1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
