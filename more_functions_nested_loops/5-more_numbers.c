#include "main.h"

/**
 * more_numbers - prints 10 times 0-14,
 *			followed by a new line.
 */

void more_numbers(void)
{
	int a, i;

	for (a = 0; a <= 9; a++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
			_putchar('\n');
	}
}
