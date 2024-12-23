#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - file to execute calculator program
 * @argc: no. of arguments
 * @argv: array of argument strings
 *
 * Return: 0 on success, error on failure.
 */

int main(int argc, char *argv[])
{
	int n1, n2;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", operation(n1, n2));
	return (0);
}
