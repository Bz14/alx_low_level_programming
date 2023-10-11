#include "function_pointers.h"
/**
 * int_index - searches an integer
 * @array: an array
 * @size: size of an array
 * @cmp: a function pointer
 * Return: index value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
