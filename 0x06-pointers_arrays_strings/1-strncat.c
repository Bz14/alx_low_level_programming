#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates upto n bites
 * @dest: destination pointer
 * @src: source pointer
 * @n: bytes to be concatenate
 * Return: a pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = strlen(dest), j, i, srclen = strlen(src);

	if (n < srclen)
		i = n;
	else
		i = strlen(src);
	for (j = 0; j < i; ++j)
	{
		*(dest + len) = *(src + j);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
