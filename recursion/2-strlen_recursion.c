#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 *
 * @s: string to be measure in length.
 *
 * Return: integer referencing string length (bytes)
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
		return (length);
	if (*s)
	{
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
