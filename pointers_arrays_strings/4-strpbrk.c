#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes.
 *		locates th first occurence in string s
 *		of any bytes in the string accept.
 *
 * @s: string to be searched.
 * @accept: accepted characters
 *
 * Return: pointer to the byte in s that matches
 *	one of the bytes in accept.
 *	NULL if no such byte found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;

		while (*a)
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
