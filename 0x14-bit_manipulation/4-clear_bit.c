#include "main.h"
/**
 * clear_bit - set value of bit to zero at index
 * @n: an unsigned integer
 * @index: an index
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int val = ~(1UL << index);

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n &= val;
	return (1);
}
