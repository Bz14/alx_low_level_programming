#include "main.h"
/**
 * flip_bits - flip bits to get a number
 * @n: an unsigned integer
 * @m: an unsigned number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int val = n ^ m, count = 0;

	while (val != 0)
	{
		val &= (val - 1);
		count++;
	}
	return (count);
}
