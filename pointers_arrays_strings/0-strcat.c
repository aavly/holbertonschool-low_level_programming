#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: string to be added to.
 * @src: string to be appended to dest, overwriting terminating null byte \0
 *	at the end of dest, then adds its own terminating null byte \0.
 *
 * Return: a pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (*dest != '\0')
		d++;

	while (*src != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	src[s] = '\0';

	return (dest);
}
