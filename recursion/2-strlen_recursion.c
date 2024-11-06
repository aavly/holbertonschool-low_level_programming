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

	if (*s)
	{
		if (*s != '\0')
		length += 1;

		_strlen_recursion(s + 1);
	}
	return (length);
}
