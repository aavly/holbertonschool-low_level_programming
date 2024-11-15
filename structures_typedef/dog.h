#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defining a structure called dog.
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Structure representing a dog:
 *		it's name, age and owner's name.
 */

typedef struct dog
{
	char *name;	/** name of dog */
	float age;	/** age of dog */
	char *owner;	/** name of dog's owner */
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
