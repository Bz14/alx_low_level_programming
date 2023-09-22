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
	int i, j, len = strlen(n);
	char s[] = {'\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int sep_len = strlen(s);

	for (i = 0; i < len; ++i)
	{
		for (j = 0; j < sep_len; ++j)
		{
			if (*(n + i) == s[j] || *(n + i) == ' ')
			{
				*(n + (i + 1)) = toupper(*(n + (i + 1)));
				break;
			}
		}
	}
	return (n);
}
