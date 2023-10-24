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
	unsigned int i;

	current = *head;
	if (head == NULL || *head == NULL)
		return (-1);
	for (i = 0; i < index - 1 && current != NULL && index != 0; i++)
		current = current->next;
	if (current == NULL)
		return (-1);
	if (index == 0)
	{
		node = current->next;
		free(current);
		*head = node;
	}
	else
	{
		if (current->next == NULL)
			node = current->next;
		else
			node = current->next->next;
		free(current->next);
		current->next = node;
	}
	return (1);
}
