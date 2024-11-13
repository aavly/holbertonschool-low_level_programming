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
	int length1 = 0, length2 = 0, i = 0, j = 0;
	char *concat;

	/* treat NULL string as empty strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* calc length of each string and adding it to length */
	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	/* allocating space using length +1 for null term. */
	concat = malloc(length1 + length2 + 1);
	/* returning NULL if there is an error with malloc */
	if (concat == NULL)
		return (NULL);

	/* initializing concat with s1 first */
	for (i = 0; i < length1; i++)
		concat[i] = s1[i];

	/* concatening s2 content from where we left off */
	for (j = 0; j < length2; j++)
		concat[i + j] = s2[j];

	/* adding null terminator */
	concat[i + j] = '\0';

	return (concat);
}
