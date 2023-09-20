#include "main.h"
#include <string.h>
/**
 * leet - encodes a string
 * @n: a string
 * Return: an encoded string
 */
char *leet(char *n)
{
	int i, len = strlen(n);

	for (i = 0; i < len; ++i)
	{
		if (*(n + i) == 'a' || *(n + i) == 'A')
			*(n + i) = 4 + 48;
		else if (*(n + i) == 'e' || *(n + i) == 'E')
			*(n + i) = 3 + 48;
		else if (*(n + i) == 'o' || *(n + i) == 'O')
			*(n + i) = 48;
		else if (*(n + i) == 't' || *(n + i) == 'T')
			*(n + i) = 7 + 48;
		else if (*(n + i) == 'l' || *(n + i) == 'L')
			*(n + i) = 1 + 48;
	}
	return (n);
}
