#include <stddef.h>
#include "lists.h"
/**
 * list_len - count the number of node
 * @h: singly linked list
 * Return: number of node
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
