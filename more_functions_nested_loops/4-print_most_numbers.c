#include "main.h"

/**
 * print_most_numbers - prints 0-9 except 2 and 4.
 */

void print_most_numbers(void)
{
	int counter = 48;

	while (counter <= 57)
	{
		if (counter != 50 && counter != 52)
			_putchar(counter);

		counter++;
	}
	_putchar('\n');
}
