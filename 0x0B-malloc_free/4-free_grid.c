#include "main.h"
#include <stdlib.h>

/**
 * free_grid - ...
 * @height: ...
 * @grid: ...
 *
 * Return: ...
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}
