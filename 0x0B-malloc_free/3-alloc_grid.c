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
	int **st;

	if (width <= 0 || height <= 0)
		return (NULL);
	st = (int **) malloc(sizeof(int *) * width);
	if (st == NULL)
	{
		free(st);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		st[i] = (int *)malloc(sizeof(int) * height);
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			st[i][j] = 0;
		}
	}
	return (st);
}
