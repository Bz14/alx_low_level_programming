#include "main.h"
#include <string.h>
/**
 * _strncpy - copy a string
 * @dest: destination pointer
 * @src: source pointer
 * @n: n byte
 * Return: a destination pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
