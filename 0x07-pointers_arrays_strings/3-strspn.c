#include "main.h"
#include <string.h>
/**
 * _strspn - get length of prefix string
 * @s: a string pointer
 * @accept: a string to be searched
 * Return: number of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = strlen(s), l = strlen(accept), found = 0;
	unsigned int count = 0;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < l; ++j)
		{
			if (*(s + i) == *(accept + j))
			{
				count += 1;
				found = 1;
				break;
			}
			else
			{
				found = 0;
			}
		}
		if (found == 0)
			break;
	}
	return (count);
}
