#include <stdio.h>

/**
 * main - prints all number of base 16 in lowercase
 *		followed by a newline
 *
 * Return: always 0.
 */

int main(void)
{
	int numbers = 48;
	int letters = 97;

	while (numbers < 58)
	{
		putchar(numbers);
		numbers++;
	}
	while (letters < 103)
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}
