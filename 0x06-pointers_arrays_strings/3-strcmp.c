#include "main.h"
#include <string.h>
/**
 * _strcmp - compare strings
 * @s1: first string
 * @s2: second string
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, len = strlen(s1);

	for (i = 0; i < len; ++i)
	{
		if (*(s1 + i) < *(s2 + i))
			return (-15);
		else if ((*s1 + i) > *(s2 + i))
			return (15);
	}
	return (0);
}
