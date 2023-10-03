#include <stdlib.h>
/**
 * alloc_grid - a pointer to a two dimensional array
 * @width: width
 * @height: height
 * Return: a two dimensional pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **st, *el;

	if (width <= 0 || height <= 0)
		return (NULL);
	st = (int **) malloc(sizeof(int *) * height);
	if (st == NULL)
	{
		free(st);
		return (NULL);
	}
	el = (int *)malloc(width * height * sizeof(int));
	if (el == NULL)
	{
		free(el);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		st[i] = el + (i * width);
		for (j = 0; j < width; j++)
		{
			st[i][j] = 0;
		}
	}
	return (st);
}
