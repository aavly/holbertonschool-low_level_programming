#include "3-calc.h"
#include <stddef.h>

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
	static op_t operators[] =
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	
	if (operators[0].op == NULL)
		return (NULL);

	if (operators[0].op[0] == s[0] && s[1] == '\0')
		return (operators[0].f);

	return (get_op_func(s + 1));
}
