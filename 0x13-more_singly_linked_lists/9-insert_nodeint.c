#include "lists.h"
/**
 * insert_nodeint_at_index - add node at index
 * @head:  singly linked list
 * @idx: index to be searched
 * @n: data of the node
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *current;
	unsigned int count = 0;

	node = malloc(sizeof(listint_t));
	if (!head || !node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (!idx)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	current = *head;
	while (current)
	{
		if (count == idx - 1)
		{
			node->next = current->next;
			current->next = node;
			return (node);
		}
		current = current->next;
		count++;
	}
	free(node);
	return (NULL);
}
