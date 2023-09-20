#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * string_toupper - covert string to uppercase
 * @n: a string
 * Return: an uppercase string
 */
char *string_toupper(char *n)
{
	int i, len = strlen(n);

	for (i = 0; i < len; ++i)
	{
		*(n + i) = toupper(*(n + i));
	}
	return (n);
}
