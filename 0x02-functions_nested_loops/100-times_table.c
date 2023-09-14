#include "main.h"
/**
 * print_times_table - Print times table
 *
 * @n: an integer
 */
void print_times_table(int n)
{
  int i, j;

  if (n > 0 && n <= 15)
    {
      for (i = 0; i <= n; ++i)
	{
	  for (j = 0; j <= n; ++j)
	    {
	      if (i * j < 10)
		{
		  _putchar((i * j) + 48);
		}
	      else if (i * j < 100)
		{
		  _putchar(((i * j) / 10) + 48);
		  _putchar(((i * j) % 10) + 48);
		}
	      else
		{
		  _putchar(((i * j) / 100) + 48);
		  _putchar((((i * j) / 10) % 10) + 48);
		  _putchar(((i * j) % 10) + 48);
		}
	      _putchar(',');
	      _putchar(' ');
	    }
	  _putchar('\n');
	}
    }
}
