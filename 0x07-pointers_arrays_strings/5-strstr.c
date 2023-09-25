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
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
