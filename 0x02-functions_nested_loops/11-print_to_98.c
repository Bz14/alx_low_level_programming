#include <stdio.h>
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
			printf("%d", i);
			if (i != 98)
				printf("%c%c", ',', ' ');
		}
	}
	else
	{
		for (i = n; i >= 98; --i)
		{
			printf("%d", i);
			if (i != 98)
				printf("%c%c", ',', ' ');
		}
	}
	putchar('\n');
}
