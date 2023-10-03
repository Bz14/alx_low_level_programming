#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - pointer to the copy of string
 * @str: pointer to string
 * Return: a pointer to newly allocated space
 */
char *_strdup(char *str)
{
	char *st;
	int i = 0;
	int len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	st = malloc((sizeof(char) * len) + 1);
	if (st == NULL)
		return (NULL);
	while (*(str + i) != '\0')
	{
		st[i] = *(str + i);
		i++;
	}
	st[i] = '\0';
	return (st);
}
