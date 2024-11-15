#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of ints.
 *
 * @min: numbers from
 * @max: numbers to
 *
 * Return: pointer to newly created array.
 *	NULL if min > max, if malloc fails.
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	/* checker */
	if (min > max)
		return (NULL);

	/* determining allocated space needed */
	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = min;
		min++;
	}

	return (array);
}
