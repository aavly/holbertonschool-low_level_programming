#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string.
 * @s2: string to add.
 * @n: number of bytes of s2.
 *
 *	if n >= s2, use entire s2
 *	if NULL is passed, treat as empty string.
 *
 * Return: pointer to newly allocated space in mem
 *	containing s1, followed by n bytes of s2,
 *	and null-terminated.
 *	IF FAIL -> return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length1 = 0, length2 = 0, i, j;

	/* empty values for NULL string passed */
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/* counting length of strings */
	while (s1[length1] != '\0')
		length1++;

	while (s2[length2] != '\0')
		length2++;

	/* setting up n */
	if (n >= length2)
		n = length2;

	/* allocating mem space +1 term null */
	concat = malloc(length1 + n + 1);
	if (concat == NULL)
		return (NULL);

	/* copy s1 into concat & same for s2 */
	for (i = 0; i < length1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + n] = '\0';
	return (concat);
}
