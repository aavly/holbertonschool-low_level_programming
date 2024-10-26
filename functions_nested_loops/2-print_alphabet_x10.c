#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x in lowercase
 *			followed by a new line.
 */

void print_alphabet_x10(void)
{
	int counter = 1;
	int ascii = 97;

	while (counter < 11)
	{
		while (ascii < 123)
		{
			_putchar(ascii);
			ascii++;
		}
		_putchar('\n');
		counter++;
	}
}
