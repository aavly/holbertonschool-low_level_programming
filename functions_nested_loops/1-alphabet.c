#include "main.h"

/**
 * print_alphabet - prints alphabet followed by new line
 *
 * Return: always 0.
 */

void print_alphabet(void)
{
	int ascii = 97;

	while (ascii < 123)
	{
		_putchar(ascii);
		ascii++;
	}
	_putchar('\n');
}
