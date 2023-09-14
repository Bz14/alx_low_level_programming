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
		for (i = n; i <= 98; ++i)
		{
			if ( n > 9)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
			else
			{
				_putchar(n + 48);
			}
			if (n != 98)
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
			if ( n > 9)
			{
				_putchar((n / 10) + 48);
				_putchar((n % 10) + 48);
			}
			else
			{
				_putchar(n + 48);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
