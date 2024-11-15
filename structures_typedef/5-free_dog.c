#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dogs.
 *
 * @d: dog structure to free
 *
 * Return: void.
 */

void free_dog(dog_t *d)
{
	/* handling d if NULL */
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
