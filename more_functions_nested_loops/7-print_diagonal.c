#include "main.h"

/**
 * print_diagonal - draws a diagonal line on terminal
 * @n: number of times '\' should be printed.
 *
 * if n <= 0, function should only print '\n'.
 */

void print_diagonal(int n)
{
	int counter = 0;

	while (counter < n)
	{
		_putchar('\');
		counter++;
	}
	_putchar('\n');
}
