#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 from 0
 *		followed by a new line
 *
 * Return: always 0.
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");

	return (0);
}
