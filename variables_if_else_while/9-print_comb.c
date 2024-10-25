#include <stdio.h>

/**
 * main - print all possible combinations of single-digit numbers
 *		numbers must be separated by a , followed by a space
 *		ascending order
 *		only putchar function
 *
 * Return: always 0.
 */

int main(void)
{
	int a;


	for (a = 48; a <= 57; a++)
	{
		putchar(a);

		if (a != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
