#include "main.h"

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
	int row, column;
	int sum1 = 0, sum2 = 0;

	while (*a)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				if (row == column)
				{
					sum1 += a[(row * column) + size];
				}
				if (row + column == 4)
				{
					sum2 += a[(row * column) + size];
				}

				row++;
				column++;
			}
		}
	}
}
