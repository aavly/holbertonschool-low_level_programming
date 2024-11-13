#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars and
 *		initializes it with specific char.
 *
 * @size: byte size of variable used
 * @c: character to initialize array.
 *
 * Return: a pointer to the array,
 *	or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	if (size != 0)
	{
		char *array = (char *)malloc(size * sizeof(c));

		return (array);
	}

	return (0);
}
