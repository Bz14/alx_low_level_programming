#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: a string
 */
void print_rev(char *s)
{
	int len = 0, i = 0;

	while (*(s + i)  != '\0')
	{
		len += 1;
		i += 1;
	}
	for (i = len; i <= 0; i--)
	{
		_putchar(*(s + i));
	}
}
