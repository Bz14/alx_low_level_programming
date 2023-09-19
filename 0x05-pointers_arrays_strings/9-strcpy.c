#include "main.h"
/**
 * _strcpy - copy a string
 * @dest: a pointer
 * @src: a pointer
 * Return: a pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

 	for (i = 0; i < strlen(src) - 1; ++i)
	{
		*(dest + i)=*(src + i);
	}
	*(dest + i) = '\0';
	return dest;
}
