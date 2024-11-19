#include "function_pointers.h"

/**
 * get_op_func - selects correct function to perform
 *		operation asked by user.
 *
 * @s: operator passed as an argument to program
 * @int: numbers to perform operation
 *
 * Return: answer of two numbers throgh given op
 */

int (*get_op_func(char *s))(int, int)
{
	op_t operators[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i].op != NULL)
	{
		if (*s == operators[i])

	}
}
