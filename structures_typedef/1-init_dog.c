#include "dog.h"

/**
 * init_dog - function that initialises a variable
 *		of type struct dog.
 *
 * @d: dog variable
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog dog1 = {name, age, owner};
}
