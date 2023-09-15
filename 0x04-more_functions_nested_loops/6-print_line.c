#include "main.h"
/**
 * print_line - Print a line
 *
 * @n: an integer
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i > 0; i--)
		{
			_putchar('_');
		}
	}
	else
		_putchar('\n');
	_putchar('\n');
}
