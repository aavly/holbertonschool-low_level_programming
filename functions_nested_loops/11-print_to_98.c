#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: number to start from.
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
