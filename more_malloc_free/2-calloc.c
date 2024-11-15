#include "main.h"
#include <string.h>
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
	void *array;

	/* checkersssss*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocating mem space based on parameters */
	array = malloc(nmemb * size);
	/* fail safe */
	if (array == NULL)
		return (NULL);

	/* setting values to 0 */
	memset(array, 0, nmemb * size);

	return (array);
}
