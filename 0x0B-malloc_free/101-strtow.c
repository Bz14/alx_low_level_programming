#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - splits a string to words
 * @str: a string
 * Return: an array of words
 */

int length(char *str);
int wordCount(char *str);

char **strtow(char *str)
{
	char **ptr;
	int idx = 0, len, i, letters, j;

	if (str == NULL && str[0] == '\0')
		return (NULL);
	len = wordCount(str);
	if (len == 0)
		return (NULL);
	ptr = malloc(sizeof(char *) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		while (str[idx] == ' ')
			idx++;
		letters = length(str + idx);
		ptr[i] = malloc(sizeof(char) * (letters + 1));
		if (ptr[i] == NULL)
		{
			for (; i > 0; i--)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < letters; j++)
		{
			ptr[i][j] = str[idx++];
		}
		ptr[i][j] = '\0';
	}
	ptr[i] = NULL;
	return (ptr);
}
/**
 * length - length of word
 * @str: a string
 * Return: length of a word
 */
int length(char *str)
{
	int idx = 0, len = 0;

	while (*(str + idx) && *(str + idx) != ' ')
	{
		len++;
		idx++;
	}
	return (len);
}
/**
 * wordCount - number of words
 * @str: a string
 * Return: word count
 */
int wordCount(char *str)
{
	int idx = 0, words = 0, len = 0;

	for (idx = 0; *(str + idx); ++idx)
		len++;
	for (idx = 0; idx < len; ++idx)
	{
		if (*(str + idx) != ' ')
		{
			words++;
			idx += length(str + idx);
		}
	}
	return (words);
}
