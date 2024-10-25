#include <stdio.h>

/**
 * main - use putchar to print alphabet in lowercase
 *
 * Return: always 0.
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
