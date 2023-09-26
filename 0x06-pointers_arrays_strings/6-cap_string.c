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
	int i = 0, len = strlen(n);

	for (; i < len; i++)
	{
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
		    *(n + i) == '}')
			if (*(n + (i + 1)) >= 'A' && *(n + (i + 1)) <= 'z')
				*(n + (i + 1)) = toupper(*(n + (i + 1)));
		if (i == 0)
			*(n + i) = toupper(*(n + i));
	}
	return (n);
}
