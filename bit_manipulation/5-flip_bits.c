#include "main.h"

/**
 * flip_bits - counts the number of bits to flip to get from
 *		one number to another.
 *
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorResult;
	unsigned int count;

	xorResult = n ^ m;
	count = 0;

	while (xorResult > 0)
	{
		if (xorResult % 2 == 1)
			count = count + 1;
		xorResult = xorResult / 2;
	}

	return (count);
}
