#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - cncatenates two strings
 * @s1: a pointer to string
 * @s2: a pointer to string
 * Return: apinter
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0, len, k = 0;
	char *st;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);
	len = strlen(s2);
	st = malloc((sizeof(char) * i) + (sizeof(char) * len) + 1);
	if (st == NULL)
		return (NULL);
	while (*(s1 + j) != '\0')
	{
		st[j] = *(s1 + j);
		j++;
	}
	while (*(s2 + k) != '\0')
	{
		st[j] = *(s2 + k);
		k++;
		j++;
	}
	st[j] = '\0';
	return (st);
}
