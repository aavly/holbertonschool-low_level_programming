#include <stdio.h>

/**
 * main - print alphabet in lowercase except q and e
 *
 * Return: always 0.
 */

int main(void)
{
	int letter = 97;

	while (letter < 123)
	{
		if (letter != 101 && letter != 113)
			putchar(letter);
		letter++;
	}
	return (0);
}
