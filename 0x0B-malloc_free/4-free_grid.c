#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free the alloated memory
 * @grid: two diensional array
 * @height:height of the array
 */
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
