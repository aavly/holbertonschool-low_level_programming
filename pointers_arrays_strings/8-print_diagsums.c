#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of the two
 *		diagonals of a square matrix
 *		of integers.
 *
 * @a: array of integers.
 * @size: size of square matrix.
 *
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum = 0;
	int row = 0;

	while (i < size)
	{
		sum += a[(row * size) + i];
		row++;
		i++;
	}
	printf("%d, ", sum);
	sum = 0;
	while (i > 0)
	{
		sum += a[(row * size) - (i)];
				row--;
				i--;
	}
	printf("%d\n", sum);
}
