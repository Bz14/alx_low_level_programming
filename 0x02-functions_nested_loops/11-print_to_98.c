#include "main.h"
/**
 * print_to_98 - Print upto 98
 *
 * @n: an integer number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i >= 98; ++i)
		{
			if (i > 9)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			else
			{
				_putchar(i + 48);
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (i = n; i >= 98; --i)
		{
			if (i >= 99)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			else
			  {
			    	_putchar((i / 100) + 48);
				_putchar(((i / 10) % 10) + 48);
				_putchar((i % 10) + 48);
			}
			if (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
