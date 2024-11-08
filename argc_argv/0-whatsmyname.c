#include <stdio.h>

/**
 * main - prints program's name (argv[0]).
 * @argc: arg count
 * @argv: array of string pointers
 *
 * Return: always 0.
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
