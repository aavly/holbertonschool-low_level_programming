#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times '\' should be printed.
 *
 * if n <= 0, function should only print '\n'.
 */

void print_diagonal(int n)
{
	int counter = 0, i;

	if (n <= 0)
		_putchar('\n');

	while (counter < n)
	{
		for (i = 0; i < counter; i++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
		counter++;
	}
}
