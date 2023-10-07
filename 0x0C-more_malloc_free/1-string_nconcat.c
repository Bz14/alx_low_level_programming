#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: size
 * Return: a pointer to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int j = 0, k = 0;
	unsigned int len = strlen(s1);
	unsigned int l = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= l)
		n = len + l;
	else
		n += len;
	ptr = malloc(sizeof(char) *  n + 1);
	if (ptr == NULL)
		return (NULL);
	while (j < n)
	{
		if (j <= len)
			ptr[j] = s1[j];
		if (j >= len)
		{
			ptr[j] = s2[k];
			k++;
		}
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
