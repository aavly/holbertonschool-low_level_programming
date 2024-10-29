#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: string to be measured.
 *
 * Return: (int) - length of a string.
 */

int _strlen(char *s)
{
	char *pointer = s;

	while (*pointer != '\0')
		pointer++;

	return (pointer - s);
}
