#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of ints.
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: a pointer to the 2D array of ints.
 *	NULL if:
 *		function fails
 *		width or height is 0 or (-)
 *
 *	each element of the grid should be initialized to 0.
 */

int **alloc_grid(int width, int height)
{
	int grid[width][height], i, j;
	int *ptr;

	ptr = &grid;

	if (width < 0 || height < 0)
		return (NULL);

	/* allocating size */
	grid = malloc((width * height) * sizeof(int));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < width * height; i++)
		grid[i] = 0;

	for (i = 0; i < width; i++)
	{
		for (j = 0; i < height; j++)
			grid[i][j] = 0;
	}

	return (ptr);
}
