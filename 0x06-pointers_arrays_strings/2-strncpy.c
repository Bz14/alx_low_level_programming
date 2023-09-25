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
	int i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
