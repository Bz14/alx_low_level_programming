#include "main.h"
/**
 * print_alphabet - print lowercases
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char lower = 'a';

	while (lower >= 'z')
	{
		_putchar(lower);
	}
	_putchar('\n');
}
