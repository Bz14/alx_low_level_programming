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
	int len = strlen(s1);
	unsigned int l = strlen(s2);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= l)
		n = l;
	ptr = malloc(sizeof(char) * (len + n + 1));
	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
