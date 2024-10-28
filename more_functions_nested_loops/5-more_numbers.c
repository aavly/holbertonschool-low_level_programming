#include "main.h"

/**
 * more_numbers - prints 10- times 0-14,
 *			followed by a new line.
 */

void more_numbers(void)
{
	int counter = 48, i;

	while (counter <= 57)
	{
		_putchar(counter);

		counter++;
	}
	counter = 48;

	for (i = 0; i < 5; i++)
	{
		_putchar('1' + counter);
	}
	_putchar('\n');
}
