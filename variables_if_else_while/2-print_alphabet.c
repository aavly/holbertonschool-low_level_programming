#include <stdio.h>
#include <ctype.h>

/**
 * main - use putchar to print alphabet in lowercase
 *
 * Return: always 0.
 */

int main(void)
{
	int a = 65;

	while (a < 91) {
		putchar(tolower(a));
	}
	return (0);
}
