#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times '_' is printed.
 *
 * if n <= 0, function should only print \n.
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = n; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
