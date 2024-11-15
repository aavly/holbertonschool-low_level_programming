#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 *
 * @nmemb: no. of elements for array.
 * @size: byte size of each element.
 *
 * Return: pointer to allocated memory.
 *	NULL if nmemb/size = 0 or malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	/* checkersssss*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocating mem space based on parameters */
	array = malloc(nmemb * size);
	/* fail safe */
	if (array == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		array[i] = 0;

	return (array);
}
