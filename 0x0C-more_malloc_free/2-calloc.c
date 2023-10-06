#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array
 * @nmemb: number of elements
 * @size: size
 * Return: a pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*(ptr + i) = 0;
	return (ptr);
}
