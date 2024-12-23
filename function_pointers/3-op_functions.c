#include "3-calc.h"

/**
 * op_add - returns the sums of two numbers.
 * @a: first number
 * @b: second number
 * Return: sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of two numbers.
 * @a: first number
 * @b: second number
 * Return: difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of two numbers.
 * @a: first number
 * @b: second number
 * Return: product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns the quotient of two numbers.
 * @a: first number
 * @b: second number
 * Return: quotient of a divided by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division
 *	of two numbers.
 * @a: first number
 * @b: second number
 * Return: remainder of the divison of a and b.
 */
int op_mod(int a,  int b)
{
	return (a % b);
}
