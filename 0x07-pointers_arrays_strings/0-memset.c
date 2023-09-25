#include "main.h"
/**
 * _memset - fills byte of memory area by constant byte
 * @s: a pointer
 * @b: a constant byte
 * @n: a size
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned  int i;
	char **ptr = &s;

	for (i = 0; i < n; i++)
	{
		*(*ptr + i) = b;
	}
	return (s);
}
