#include "main.h"
#include <string.h>
/**
 * rev_string - Reverse a string
 * @s: a string
 */
void rev_string(char *s)
{
	int i = 0, j = strlen(s) - 1;
	char temp;

	for (; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
