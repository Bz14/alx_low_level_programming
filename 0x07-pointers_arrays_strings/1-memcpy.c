#include "main.h"
/**
 * _memcpy - copy memory area fro,m one to the other
 * @dest: a destination pointer
 * @src: a source ponter
 * @n: size to be copied
 * Return: a destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char **ptr = &src;
	char **pt = &dest;
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		*(*pt + i) = *(*ptr + i);
	}
	return (dest);
}
