#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i, nameLength = 0, ownerLength = 0;

	/* calc length for strings */
	while (name[nameLength])
		nameLength++;
	while (owner[ownerLength])
		ownerLength++;

	/* allocating mem for new dog */
	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	/* allocate mem & copy name */
	dog1->name = malloc(nameLength + 1);
	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}
	for (i = 0; i <= nameLength; i++)
		dog1->name[i] = name[i];

	/* allocate mem & copy owner */
	dog1->owner = malloc(ownerLength + 1);
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}
	for (i = 0; i <= ownerLength; i++)
		dog1->owner[i] = owner[i];

	dog1->age = age;

	return (dog1);
}
