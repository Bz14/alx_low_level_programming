#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - iterate through every array element
 * @array: an array
 * @size: size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}
