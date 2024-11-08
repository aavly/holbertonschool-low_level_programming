#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number of arguments passes to program.
 * @argc: arg count
 * @argv: array of string pointers
 *
 * Return: always 0.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error");

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
