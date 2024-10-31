#include "main.h"

/**
 * _strcmp - compares two strings.
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
	int one = 0;
	int two = 0;
	int diff;

	while (s1[one] != '\0')
		one++;

	while (s2[two] != '\0')
		two++;

	if (one == two)
		diff = 0;
	else if (one < two)
	{
		diff = (-1 * (two - one));
	}
	else if (one > two)
	{
		diff = (-1 * (one - two));
	}

	return (diff);
}
