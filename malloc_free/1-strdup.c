#include <stdlib.h>
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
	char *duplicate;
	int strlength = 0, i;

	if (str == NULL)
		return (NULL);

	/* calc str length for mem allocation */
	while (*str != '\0')
		strlength++;

	/* allocating mem for string (including null terminator) */
	duplicate = malloc(strlength + 1);
	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < strlength; i++)
		duplicate[i] = str[i];

	/* null-terminate the duplicate string */
	duplicate[strlength] = '\0';

	return (duplicate);
}
