#include <stdio.h>

/**
 * main - printing alphabet in lowercase BUT in reverse
 *
 * Return: always 0.
 */

int main(void)
{
	int dec = 122;

	while (dec > 96)
	{
		putchar(dec);
		dec--;
	}
	putchar('\n');

	return (0);

}
