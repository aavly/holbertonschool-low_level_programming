#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at a given index.
 *
 * @n: pointer to the number to modify.
 * @index: index of bit to clear, starting from 0.
 *
 * Return: 1 if it works, -1 otherwise.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, i;

	mask = 1;

	if (index > 63)
		return (-1);

	mask = mask << index;

	*n = *n & ~mask;

	return (1);
}
