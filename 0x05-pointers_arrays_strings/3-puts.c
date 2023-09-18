#include "main.h"
/**
 * _puts - print character to stdout
 * @str: a string
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*str);
	}
}
