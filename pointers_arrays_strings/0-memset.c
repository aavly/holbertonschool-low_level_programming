#include "main.h"

/**
 * _memset - fills the first n bytes of memory
 *		area pointed to by s with constant
 *		byte b.
 * @s: string subject used to appoint constant byte.
 * @b: constant byte.
 * @n: number of bytes (of s) to be filled.
 *
 * Return: a pointer to the memory area, s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while(i < n)
	{
		*s[i] = b;
	}
}
