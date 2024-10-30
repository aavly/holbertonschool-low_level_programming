#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src,
 *		including the terminating null byte '\0'
 *		to the buffer pointed set to by dest.
 *
 * @dest: char pointer to be returned.
 * @src: char pointer to be copied.
 *
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, loop = 0;

	while (*src != '\0')
	{
		i++;
	}
	i++;

	while (loop < i)
	{
		_putchar(dest[i]);
		loop++;
	}

	dest[i] = '\0';

	return (dest);
}
