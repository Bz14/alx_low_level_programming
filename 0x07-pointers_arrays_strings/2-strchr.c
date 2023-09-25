#include "main.h"
#include <string.h>
/**
 * _strchr - return the first occurence of a charcter in a string
 * @s: a pointer to a string
 * @c: a charcter
 * Return: a pointer to the first occurence of a character
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr = NULL;

	for (i = 0; *(s + i) >= '\0'; ++i)
	{
		if (*(s + i) == c)
		{
			ptr = &(*(s + i));
			return (ptr);
		}
	}
	return (NULL);
}
