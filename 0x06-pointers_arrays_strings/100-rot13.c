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
	char enc_1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char enc_2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; i < len; ++i)
	{
			for (j = 0; j < 52; j++)
			{
				if (*(n + i) == enc_1[j])
				{
					*(n + i) = enc_2[j];
					break;
				}
			}
	}
	return (n);
}
