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
	int **grid, i, j;

	/* checking for correct values */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocating size for row pointers */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* allocate memory for each row + initialise elements to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* free allocated rows if NULL or failure */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		/* initializing each element in row to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
