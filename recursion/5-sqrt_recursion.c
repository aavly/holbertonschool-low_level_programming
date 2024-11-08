#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of n.
 *
 * @n: number to check for square root.
 *
 * Return: (int) natural square root.
 */

int _sqrt_recursion(int n)
{
	int find = 0;

	find++;
	find = n - _sqrt_recursion(n - 1);

	if (n == 0)
		return (find);
	else
		return (-1);
}
