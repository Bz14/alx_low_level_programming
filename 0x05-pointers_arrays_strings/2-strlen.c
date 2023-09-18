#include "main.h"
/**
 * _strlen - find the length of a string
 * @s: a string
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len = 0, i = 0;

	while (*(s + i) != '\0')
	{
		len += 1;
		i += 1;
	}
	return (len);
}
