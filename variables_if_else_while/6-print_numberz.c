#include <stdio.h>

/**
 * main - printing all single digit numbers of base 10
 *		followed by a new line
 *		not allowed to use any var of type char
 *		can only use putchar function
 *
 * Return: always 0.
 */

int main(void)
{
	int dec = 48;

	while (dec < 58)
	{
		putchar(dec);
		dec++;
	}
	putchar('\n');

	return (0);
}
