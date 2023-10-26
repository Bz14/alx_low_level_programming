#include "main.h"
/**
 *get_bit - returns the value at given at index
 * @n: an unsigned integer
 * @index: an index
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int val = 1UL << index;
	int bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	bit = (n & val) >> index;
	return (bit);
}
