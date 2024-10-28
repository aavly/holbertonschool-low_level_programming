#include <stdio.h>

/**
 * main - finds and prints largest prime factor of 612852475143
 *	- followed by a newline.
 *
 * Return: 0 on success.
 */

int main(void)
{
	long num = 612852475143;
	long factor = 2;
	long biggest = 0;

	while (num % 2 == 0)
	{
		biggest = factor;
		num /= 2;
	}

	for (factor = 3; factor * factor <= num; factor += 2)
	{
		while (num % factor == 0)
		{
			biggest = factor;
			num /= factor;
		}
	}

	if (num > 2)
		biggest = num;

	printf("%ld\n", biggest);
	return (0);
}
