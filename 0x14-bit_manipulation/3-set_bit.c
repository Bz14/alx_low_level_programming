#include "main.h"
/**
 * set_bit - set bit at index
 * @n: an unsigned int
 * @index: an index
 * Return: 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= val;
	return (1);
}
