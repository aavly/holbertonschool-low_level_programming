#include "main.h"

/**
 * puts_half - prints second half of a string,
 *		followed by a newline.
 *		if no. of characters odd, print last n.
 *
 * @str: denotes the str to be half printed.
 */

void puts_half(char *str)
{
	int length = 0, i, start;

	while (str[length] != '\0')
		length++;

	start = (length + 1) / 2;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}
