#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest:  memory area copied to.
 * @src: memory area copied from.
 * @n: number of bytes to be copied.
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
