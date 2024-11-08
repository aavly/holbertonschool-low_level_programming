#include "main.h"

/**
 * helper - helper func to recursively calc sqrt
 * @n: number to find sqrt.
 * @subtractor: subtracting -2 each loop
 * @count: how many times we gotta loop.
 *
 * Return: sqrt or -1 if not vald.
 */

int helper(int n, int subtractor, int count)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (count);

	return (helper(n - subtractor, subtractor + 2, count + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of n.
 * @n: number to check for square root.
 *
 * Return: (int) natural square root.
 */

int _sqrt_recursion(int n)
{
	return (helper(n, 1, 0));
}
