#include "main.h"
void print_alphabet_x10(void)
{
	char lower;
        int i = 0;
        while (i < 10)
        {
		lower = 'a';
        while (lower <= 'z')
	{
		_putchar(lower);
		lower++;
	}
	i++;
        _putchar('\n');
	}
}
