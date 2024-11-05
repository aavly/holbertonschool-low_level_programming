#include "main.h"

/**
 * _strspn - calcs length (in bytes) number of
 *	characters from beginning of s that are
 *	made up only of characters in accept.
 *
 * @s: string to be scanned.
 * @accept: string containing set of char to match s.
 *
 * Return: number of bytes in s that mnatch accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match_found;
	char *a = accept;

	while (*s)
	{
		match_found = 0;

		while (*a)
		{
			if (*s == *a)
			{
				match_found = 1;
				break;
			}
			a++;
		}

	if (!match_found)
		break;

	count++;
	s++;
	}

	return (count);
}
