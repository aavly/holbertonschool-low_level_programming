#include <stdio.h>

/**
 * main - prints number of arguments passes to program.
 * @argc: arg count
 * @argv: array of string pointers
 *
 * Return: always 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	int arg = argc - 1;

	printf("%d\n", arg);
	return (0);
}
