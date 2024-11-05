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
	int i = 0;

	while (*s != '\0')
	{
		if (s[i] == accept[i])
		{
			count++;
		}
		i++;
	}

	return (count);
}
