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

	/* checking for exactly 3 arguments */
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	/* converting arguments to ints */
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	/* attaining operator function */
	operation = get_op_func(argv[2]);

	/* invalid operator failsafe */
	if (!operation)
	{
		printf("Error\n");
		return (99);
	}

	/* division/modulo by 0 failsafe */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	/* perform op */
	printf("%d\n", operation(n1, n2));
	
	return (0);

}
