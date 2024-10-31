#include "main.h"

/**
 * _strncpy - copies a string.
 * @dest: string appended to.
 * @src: string to be copied.
 * @n: number of chars (bytes) copies from src into dest.
 *
 * Return: pointer (array) to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
		d++;

	while (s < n && src[s] != '\0')
	{
		dest[s] = src[s];
		s++;
	}

	dest[d] = '\0';

	return (dest);
}
