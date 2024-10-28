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
	int y, x;

	if (size <= 0)
		_putchar('\n');

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size - y - 1; x++)
		{
			_putchar(' ');
		}

		for (x = 0; x < y + 1; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
