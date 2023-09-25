#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * cap_string - capitaize a string'
 * @n: a string
 * Return: return a poniter to a string
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i])
	{
		while (!(*(n + i) >= 'a' && *(n + i) <= 'z'))
			i++;
		if (*(n + i) == ' ' ||
		    *(n + i) == '\t' ||
		    *(n + i) == '\n' ||
		    *(n + i) == ',' ||
		    *(n + i) == ';' ||
		    *(n + i) == '.' ||
		    *(n + i) == '!' ||
		    *(n + i) == '?' ||
		    *(n + i) == '"' ||
		    *(n + i) == '(' ||
		    *(n + i) == ')' ||
		    *(n + i) == '{' ||
		    *(n + i) == '}' ||
		    i == 0)
			*(n + i) += 32;
		i++;
	}
	return (n);
}
