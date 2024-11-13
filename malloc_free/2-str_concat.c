#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: string to be added to.
 * @s2: string to add.
 *
 * Return: pointer to a newly allocated space in
 *	memory which contains the contents of s1,
 *	followed by contents of s2, and \0.
 *	Othwerise, NULL on failure.
 *
 * if NULL is passed, treat it as an empty string.
 */

char *str_concat(char *s1, char *s2)
{
	int length = 0, i = 0, j = 0;
	char *concat;

	/* calc length of each string and adding it to length */
	while (*s1 != '\0')
		length++;

	while (*s2 != '\0')
		length++;

	/* allocating space using length +1 for null term. */
	concat = malloc(length + 1);
	/* returning NULL if there is an error with malloc */
	if (concat == NULL)
		return (NULL);

	/* initializing concat with s1 first */
	while (*s1 != '\0')
	{
		concat[i] = s1[i];
		i++;
	}

	/* concatening s2 content from where we left off */
	while (*s2 != '\0')
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	/* adding null terminator */
	concat[i] = '\0';

	return (concat);
}
