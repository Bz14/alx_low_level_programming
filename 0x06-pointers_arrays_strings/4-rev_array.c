#include "main.h"
#include <string.h>
/**
 * reverse_array - reverse a string
 * @a: an array
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp, j = n - 1;

	for (; i < j; i++, j--)
	{
		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
