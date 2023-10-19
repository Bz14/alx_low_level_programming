#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - add node at the begining
 * @head:  list of nodes
 * @str:  a string
 * Return: the address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *current;

	if (str == NULL)
		return (NULL);
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	ptr->str =  strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(ptr->str);
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
