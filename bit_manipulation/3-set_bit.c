#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: pointer to the number to modify.
 * @index: index of the bit to set, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int i;

	if (index > 63)
		return (-1);

	for (i = 0; i < index; i++)
		mask = mask * 2;

	*n = *n + mask;

	return (1);

}
