#include "main.h"

/**
 * print_rev - function that prints a string in reverse,
 *		followed by a new line.
 *
 * @s: refers to the string to be printed in reverse.
 */

void print_rev(char *s)
{
	int length = 0, i;

	while (s[length] != '\0')
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
