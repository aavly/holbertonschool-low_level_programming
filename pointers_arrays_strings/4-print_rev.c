#include "main.h"

/**
 * print_rev - function that prints a string in reverse,
 *		followed by a new line.
 *
 * @s: refers to the string to be printed in reverse.
 */

void print_rev(char *s)
{
	int length = 0;
	int i = length - 1;

	while (s[length] != '\0')
		length++;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}

	_putchar('\n');
}
