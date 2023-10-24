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

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	if (idx == 0)
		*head = node;
	current = *head;
	while (count < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		count++;
	}
	if (current == NULL)
	{
		free(node);
		return (NULL);
	}
	if (idx == 0)
		node->next = current;
	else
	{
		node->next = current->next;
		current->next = node;
	}
	return (node);
}
