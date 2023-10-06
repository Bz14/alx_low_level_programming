#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: minimum
 * @max: maximium
 * Return: a pointer to an array
 */
int *array_range(int min, int max)
{
	int len, i, j = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		len++;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		*(ptr + j) = i;
	}
	return (ptr);
}
