#include "main.h"
/**
 * print_number - Print an integer
 * @n: an integer
 */
void print_number(int n)
{
	if (n >= 0 && n <= 9)
		_putchar(n + 48);
	else if (n >= 10 && n <= 99)
	{
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n >= 100 && n <= 999)
	{
		_putchar((n / 100) + 48);
		_putchar(((n / 10) % 10) + 48);
		_putchar(n % 10);
	}
	else if (n >= 1000 && n <= 9999)
	{
		_putchar((n / 1000) + 48);
		_putchar(((n / 100) % 10) + 48);
		_putchar(((n / 10) % 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if (n < 0)
	{
		n = -n;
		_putchar('-');
		_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
}
