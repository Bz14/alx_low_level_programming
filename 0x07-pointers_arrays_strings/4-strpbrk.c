#include "main.h"
#include <string.h>
/**
 * _strpbrk - search a string for any set of byte
 * @s: a pointer string
 * @accept: a string to be searched
 * Return: a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, len = strlen(s), l = strlen(accept);
	char *ptr = NULL;

	for (i = 0; i < len ; ++i)
	{
		for (j = 0; j < l ; ++j)
		{
			if (*(s + i) == *(accept + j))
			{
				ptr = &(*(s + i));
				return (ptr);
			}
		}
	}
	return (ptr);
}
