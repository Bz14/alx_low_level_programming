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
	int len, i;
	int *ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		*(ptr + i) = min++;
	}
	return (ptr);
}
