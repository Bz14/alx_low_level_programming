#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a linked list
 * @head: a linked list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
