#include "main.h"

/**
 * _strncat - concatenates two strings.
 *
 * @dest: resulting string.
 * @src: string appending to dest.
 * @n: number of bytes used at most to concatenate.
 *
 *	- src does does not need to be null terminated if
 *	it contains n or more bytes.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;
	int sCounter = 0;

	while (dest[d] != '\0')
		d++;

	while (src[sCounter] != '\0')
		sCounter++;
	sCounter++;

	while (s < n)
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	if (sCounter < n)
		dest[d] = '\0';

	return (dest);
}
