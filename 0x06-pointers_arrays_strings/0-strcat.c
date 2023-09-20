#include "main.h"
#include <string.h>
/**
 * _strcat - concatenates a string
 * @dest:  a string
 * @src: a string
 * Return: a pointer to a string
 */
char *_strcat(char *dest, char *src)
{
	int len = strlen(dest) - 1, j, i = strlen(src);

	*(dest + len) = ' ';
	len += 1;
	for (j = 0; j < i; ++j)
	{
		*(dest + len) = *(src + j);
		len++;
	}
	*(dest + len) = '\0';
	return (dest);
}
