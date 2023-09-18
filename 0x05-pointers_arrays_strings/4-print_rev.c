#include <string.h>
#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: a string
 */
void print_rev(char *s)
{
	int j;

	for (j = strlen(s) - 1; j >= 0; --j)
		_putchar(*(s + j));
	_putchar('\n');
}
