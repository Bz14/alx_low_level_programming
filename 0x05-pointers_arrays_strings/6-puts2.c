#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: a string
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			_putchar(*(str + i));
		i += 1;
	}
	_putchar('\n');
}
