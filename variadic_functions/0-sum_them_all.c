#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters to sum.
 *
 * Return: sum of parameters, 0 is n = 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum;
	va_list addUp;

	if (n == 0)
		return (0);

	va_start(addUp, n);

	i = 0;
	sum = 0;

	while (i < n)
	{
		sum = sum + va_arg(addUp, int);
	}
	va_end(addUp);
	return (sum);


}
