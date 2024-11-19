#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects correct function to perform
 *		operation asked by user.
 *
 * @s: operator passed as an argument to program
 *
 * Return: answer of two numbers throgh given op
 */

int (*get_op_func(char *s))(int, int)
{
	 op_t operators[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (operators[i].op != NULL)
	{
		if (operators[i].op[0] == s[0] &&
		s[1] == '0')
			return (operators[i].f);
		i++;
	}

	return (NULL);
}
