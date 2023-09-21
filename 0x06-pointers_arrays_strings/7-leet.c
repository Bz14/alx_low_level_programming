#include "main.h"
#include <string.h>
#include <ctype.h>
/**
 * leet - encodes a string
 * @n: a string
 * Return: an encoded string
 */
char *leet(char *n)
{
	int i, len = strlen(n);
	char letter[] = {'a', 'e', 'o', 't', 'l'};
	char number[] = {'4', '3', '0', '7', '1'};
	int j, let_len = strlen(letter);

	for (i = 0; i < len; ++i)
	{
		for (j = 0; j <  let_len; j++)
		{
			if (*(n + i) == letter[j] || *(n + i) == toupper(letter[j]))
			{
				*(n + i) = number[j];
				break;
			}
		}
	}
	return (n);
}
