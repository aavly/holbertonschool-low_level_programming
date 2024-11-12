#include "main.h"

/**
 * factorial - returns the factoral of a given number.
 *
 * @n: number of factorial.
 *
 * Return: factorial (int) of n.
 */

int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		fact = -1;
	}
	else if (n == 0 || n == 1)
	{
		fact = 1;
	}
	else
	{
		fact = n * factorial(n - 1);
	}
	return (fact);
}
