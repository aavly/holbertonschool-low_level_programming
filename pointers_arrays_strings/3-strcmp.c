#include "main.h"

/**
 * _strcmp - compares two strings (in ASCII values)
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 *
 * Return: int (comparing number of bytes in each)
 *	0 if s1 and s2 are equal
 *	negative is s1 < s2
 *	positive is s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1 = s1 + 1;
		s2 = s2 + 1;
	}
	return (0);
}
