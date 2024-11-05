#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring.
 *	finds the first occurence of the substring
 *	needle in string haystack.
 *	terminating bytes are NOT compared.
 *
 * @haystack: string to refer to.
 * @needle: string to search.
 *
 * Return: pointer to beginning of located substring.
 *	or NULL if substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
