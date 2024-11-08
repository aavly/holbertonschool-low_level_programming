#include "main.h"

/**
 * helper - helper function to recursively find prime.
 * @mid: halfway point of n.
 * @i: incrementor up to mid.
 *
 * Return: (1) if prime, (0) otherwise.
 */

int helper(int mid, int i)
{
	int calcPrime;

	if (mid / i % 0)
		return (0);

	calcPrime = mid / helper(i + 1);

	return (1);
}

/**
 * is_prime_number - determines if number is prime.
 * @n: number to determine.
 *
 * Return: (1) if prime, (0) otherwise.
 */

int is_prime_number(int n)
{
	if (n % 2 == 0)
		return (0);

	return (helper((n + 1) / 2), 1);
}
