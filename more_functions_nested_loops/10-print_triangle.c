#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a newline.
 * @size: size of the triangle.
 *
 *		- if size <= 0, function should only print newline
 *		- use # to print triangle
 */

void print_triangle(int size)
{
	int y, x, placement, hash;

	for (y = 0; y < size; y++)
	{
		placement = 10 - y;

		for (x = 0; x < placement; x++)
		{
			_putchar(' ');
		}

		hash = 10 - placement;

		for (x = 0; x < hash; x++)
		{
			_putchar('#');
		}
	}
	_putchar('\n');
}
