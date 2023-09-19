#include "main.h"
#include <string.h>
/**
 * puts_half - Print half of a string
 * @str: a string
 */
void puts_half(char *str)
{
	int len = strlen(str), n;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 2) / 2;
	while (n < len)
	{
		_putchar(*(str + n));
		n += 1;
	}
	_putchar('\n');
}
