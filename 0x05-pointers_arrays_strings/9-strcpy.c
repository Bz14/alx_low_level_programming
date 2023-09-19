#include "main.h"
#include <string.h>
/**
 * _strcpy - copy a string
 * @dest: a pointer
 * @src: a pointer
 * Return: a pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i, len = strlen(src);

	for (i = 0; i < len - 1; ++i)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	_putchar('\n');
	return (dest);
}
