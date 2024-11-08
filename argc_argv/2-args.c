#include <stdio.h>

/**
 * main - prints number of arguments passes to program.
 * @argc: arg count
 * @argv: array of string pointers
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
