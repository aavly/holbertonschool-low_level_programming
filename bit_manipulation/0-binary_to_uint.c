#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if:
 *	- there is 1+ chars in the string b that is not 0 or 1
 *	- b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result;

	result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		result = (result << 1) | (*b - '0');
		b = b + 1;
	}

	return (result);
}
