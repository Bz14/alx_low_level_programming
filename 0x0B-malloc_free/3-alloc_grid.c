#include <stdlib.h>
/**
 * alloc_grid - a pointer to a two dimensional array
 * @width: width
 * @height: height
 * Return: a two dimensional pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j, l;
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
	for (j = 0; j < height; j++)
	{
		for (l = 0; l < width; l++)
		{
			st[j][l] = 0;
		}
	}
	return (st);
}
