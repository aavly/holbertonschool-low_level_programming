#include "main.h"

/**
 * _atoi - converts string to int.
 * @s: string to convert.
 *		(-) and (+) needs to be taken into account
 *
 * Return: int value of string provided, 0 if no numbers in string.
 */

int _atoi(char *s)
{
	int integer = 0;
	int sign = 1;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			integer = integer * 10 + (*s - '0') * sign;

			if (*(s + 1) < '0' || *(s + 1) > '9')
				break;
		}
		else if (integer != 0)
			break;
		s++;
	}

	return (integer);
}
