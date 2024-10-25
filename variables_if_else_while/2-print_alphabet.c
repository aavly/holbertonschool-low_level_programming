#include <stdio.h>
#include <ctype.h>

/**
 * main - use putchar to print alphabet in lowercase
 *
 * Return: always 0.
 */

int main(void)
{
	int a = 97;

	while (a < 122)
	{
		putchar(a);
		a++;
	}
	return (0);
}
