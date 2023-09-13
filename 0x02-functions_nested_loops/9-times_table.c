#include "main.h"
/**
 * times_table - Print multiplication table
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++i)
		{
			int prod = i * j;

			if (prod > 9)
			{
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			else
			{
				_putchar(48 + prod);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('$');
		_putchar('\n');
	}
}
