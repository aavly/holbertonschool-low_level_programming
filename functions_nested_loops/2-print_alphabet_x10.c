#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10x in lowercase
 *			followed by a new line.
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	int ascii;

	while (counter < 10)
	{
		for (ascii = 97; ascii < 123; ascii++)
			_putchar(ascii);
		_putchar('\n');
		counter++;
	}
}
