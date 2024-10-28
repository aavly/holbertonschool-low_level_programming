#include "main.h"
#include <stdio.h>

/**
 * main - prints 1-100, followed by newline
 *	- for multiples of 3, print Fizz
 *	- for multiples of 5, print Buzz
 *	- for number which are multiples of both, print FizzBuzz
 *	- each number/word should be separated by a space
 *
 * Return: 0.
 */

int main(void)
{
	int hunnid = 1;

	for (hunnid = 1; hunnid <= 100; hunnid++)
	{
		if (hunnid % 3 == 0)
		{
			if (hunnid % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else
				printf("Fizz");
		}
		else if (hunnid % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("%d", hunnid);

		printf(" ");
	}

	return (0);
}
