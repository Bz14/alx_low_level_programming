#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * rot13 - encode a string using rot13
 * @n: a string
 * Return: a string
 */
char *rot13(char *n)
{
	int j, i, len = strlen(n);
	char enc_1[] = "abcdefghijklmnopqrstuvwxyz";
	char enc_2[] = "nopqrstuvwxyzabcdefghijklm";

	for (i = 0; i < len; ++i)
	{
		if (isalpha(*(n + i)))
		{
			for (j = 0; j < 26; j++)
			{
				if (*(n + i) == enc_1[j] || *(n + i) == toupper(enc_1[j]))
				{
					if (isupper(*(n + i)))
						*(n + i) = toupper(enc_2[j]);
					else
						*(n + i) = enc_2[j];
					break;
				}
			}
		}
	}
	return (n);
}
