#include "main.h"

/**
 * more_numbers - prints 10 times 0-14,
 *			followed by a new line.
 */

void more_numbers(void)
{
	int counter = 48, i;

	for (i = 0; i < 9; i++)
	{
		for (i = 0; i < 14; i++)
		{
			if (i < 10)
			{
				_putchar(counter);
				counter++;
			}
			else
			{
				_putchar('1');
				_putchar(counter);
				counter++;
			}
			_putchar('\n');
		}
	}
}
