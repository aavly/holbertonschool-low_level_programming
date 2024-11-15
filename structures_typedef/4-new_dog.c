#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog.
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name.
 *
 * Return: pointer to new dog
 *		NULL if function fails.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	/* allocating mem for new dog */
	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	/* allocate mem & copy name */
	dog1->name = malloc(strlen(name) + 1);
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	strcpy(dog1->name, name);

	/* allocate mem & copy owner */
	dog1->owner = malloc(strlen(owner) + 1);
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	strcpy(dog1->owner, owner);

	dog1->age = age;

	return (dog1);
}
