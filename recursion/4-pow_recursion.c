#include "main.h"

/**
 * _pow_recursion - returns the value of x raise to the power of y.
 *
 * @x: base.
 * @y: power.
 *
 * Return: x raised to the power y (integer)
 *		if y lower than 0, return -1.
 */

int _pow_recursion(int x, int y)
{
	int power = 1;

	if (y < 0)
		return (-1);

	power *= x * _pow_recursion(x, y - 1);

	return (power);
}
