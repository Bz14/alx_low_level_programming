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
	int i = 0, j = 0, len = strlen(s1);
	unsigned int l = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	ptr = malloc((sizeof(char) * len) + (sizeof(char) * n) + 1);
	while (*(s1 + i) != '\0')
	{
		*(ptr + i) = *(s1 + i);
		i++;
	}
	if (n < l)
	{
		while (n > 0)
		{
			*(ptr + i) = *(s2 + j);
			i++;
			j++;
			n--;
		}
	}
	else
	{
		while (*(s2 + j) != '\0')
		{
			*(ptr + i) = *(s2 + j);
			i++;
			j++;
		}
	}
	*(ptr + i) = '\0';
	return (ptr);
}
