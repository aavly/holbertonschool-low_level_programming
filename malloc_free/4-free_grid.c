#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previously created
 *		by alloc_grid function.
 *
 * @grid: pointer to grid.
 * @height: height of grid.
 *
 * Return: void.
 */

void free_grid(int **grid, int height)
{
	int i;

	/* handling grid if NULL */
	if (grid == NULL || height <= 0)
		return;

	/* freeing each row */
	for (i = 0; i < height; i++)
		free(grid[i]);

	/* freeing grid arrat itself */
	free(grid); 
}
