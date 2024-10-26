#include "main.h"

/**
 * Write a function that prints the alphabet
 * followed by a new line
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

int main(void)
{
	print_alphabet();

	return (0);
}
