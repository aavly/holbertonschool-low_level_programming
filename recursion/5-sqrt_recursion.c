#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of n.
 * @n: number to check for square root.
 *
 * Return: (int) natural square root.
 */

int _sqrt_recursion(int n)
{
	/**
	 * helper - helper func to recursively calc sqrt
	 */
	int helper(int n, int subtractor, int count)
	{
		if (n < 0)
			return (-1);
		if (n == 0)
			return (count);

		return (helper(n - subtractor, subtractor + 2, count + 1));
	}
	return (helper(n, 1, 0));
}
