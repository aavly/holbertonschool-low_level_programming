#include "main.h"

/**
 * puts2 - prints every other character,
 *		starting with the first character,
 *		followed by a newline
 *
 * @str: string to be printed.
 */

void puts2(char *str)
{
	int count, length = 0;

	while (*str != '\0')
	{
		length++;

		for (count = 0; count < str[length] + 1; count++)
		{
			if (count % 2 == 0)
				_putchar(*str);
		}
	}
	_putchar('\n');
}
