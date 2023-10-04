#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a pointer to a two dimensional array
 * @width: width
 * @height: height
 * Return: a two dimensional pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **st;

	if (width <= 0 || height <= 0)
		return (NULL);
	st = malloc(sizeof(int *) * height);
	if (st == NULL)
	{
		free(st);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		st[i] = malloc(sizeof(int) * width);
		if (st[i] == NULL)
		{
			for (j = i; j >= 0; j--)
				free(st[j]);
			free(st);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			st[k][l] = 0;
		}
	}
	return (st);
}
