#include "main.h"
/**
 * print_binary - print binary representation of a number
 * @n: an unsigned long int
 */
void print_binary(unsigned long int n)
{
	unsigned long int val = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int zeros = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (val > 0)
	{
		if ((n & val) != 0)
		{
			zeros = 0;
			_putchar('1');
		}
		else if (!zeros)
		{
			_putchar('0');
		}
		val >>= 1;
	}
}
