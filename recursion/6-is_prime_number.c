#include "main.h"

/**
 * helper - helper function to recursively find prime.
 * @n: number determined if prime.
 * @i: incrementor up to n/2.
 *
 * Return: (1) if prime, (0) otherwise.
 */

int helper(int n, int i)
{
	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (helper(n, (i + 1)));
}

/**
 * is_prime_number - determines if number is prime.
 * @n: number to determine.
 *
 * Return: (1) if prime, (0) otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (helper(n, 2));
}
