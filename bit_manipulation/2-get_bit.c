#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: number to check.
 * @index: index of the bit, starting from 0.
 *
 * Return: the value of the bit at index (0 or 1), or -1 if error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
