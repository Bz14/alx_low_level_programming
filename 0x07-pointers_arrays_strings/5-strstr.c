#include "main.h"
#include <string.h>
/**
 * _strstr - locate a substring
 * @haystack: a pointer string
 * @needle: a substring to be searched
 * Return: resturn a pointer to the occurnce
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, len = strlen(haystack), l = strlen(needle), found = 0;
	char *ptr = NULL;

	while (i < len && *(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle + j))
		{
			j = 0;
			while (j < l)
			{
				if (*(haystack + i) == *(needle + j))
				{
					j++;
					i++;
					found = 1;
				}
				else
				{
					found = 0;
					break;
				}
			}
			if (found == 1)
			{
				ptr = &(*(haystack + (i - l)));
				return (ptr);
			}
		}
		i++;
	}
	return (NULL);
}
