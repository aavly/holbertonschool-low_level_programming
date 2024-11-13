#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 *		space in memory, which contains a
 *		copy of the string given as parameter.
 *
 * @str: string that takes up allocated memory.
 *
 * Return: NULL if str=NULL or insufficient memory,
 *	otherwise pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *duplicate = str;

	if (str == NULL)
		return (NULL);

	/* allocating mem for new string (+1 for null terminator) */
	duplicate = malloc(strlen(str) + 1);

	/* copy string into the newly allocated space */
	strcpy(duplicate, str);

	return (duplicate);
}
