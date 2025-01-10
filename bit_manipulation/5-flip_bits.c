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

	while (xorResult != 0)
	{
		count += xorResult & 1;
		xorResult >>= 1;
	}

	return (count);
}
