#include "main.h"
#include <stdlib.h>
/**
 * _strdup - pointer to the copy of string
 * @str: pointer to string
 * Return: a pointer to newly allocated space
 */
char *_strdup(char *str)
{
	char *st;
	int i = 0;

	if (str == NULL)
		return (NULL);
	st = malloc(sizeof(str) + 1);
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
