#include <stdio.h>

/**
 * main - Print alphabet in lowercase and then in uppercase
 *		followed by a new line
 *
 * Return: always 0.
 */

int main(void)
{
	int lower = 97;
	int upper = 65;

	while (lower < 123)
	{
		putchar(lower);
	}
	while (upper < 91)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
