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
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	/*
	 *  allocates memory for array
	 */
	array = malloc(size * sizeof(char));

	/*
	 * check if malloc failed
	 */
	if (array == NULL)
		return (NULL);

	/*
	 * initalising array with char c
	 */
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
