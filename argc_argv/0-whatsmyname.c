#include <stdio.h>

/**
 * main - prints program's name (argv[0]).
 * @argc: arg count
 * @argv: array of string pointers
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int count = 0;
	while (argc > 1 && count != 1)
	{
		printf("%s\n", argv[0]);
		count++;
	}
	return (0);
}
