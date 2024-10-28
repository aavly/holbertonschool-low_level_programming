#include "main.h"

/**
 * print_square - prints a square, followed by newline
 * @size: size of the square.
 *
 * if size <= 0, function should only rint '\n'.
 */

void print_square(int size)
{
	int y, x;

	if (size <= 0)
		_putchar('\n');

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('#');
	}
}
