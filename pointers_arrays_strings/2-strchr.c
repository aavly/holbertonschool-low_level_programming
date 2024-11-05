#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string.
 * @s: string to search.
 * @c: character to locate in string.
 *
 * Return: pointer to first occurence of c in s.
 *		NULL if not c not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
		return (s);

	return (NULL);
}
