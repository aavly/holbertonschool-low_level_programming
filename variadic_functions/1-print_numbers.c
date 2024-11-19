#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers followed by \n
 * @separator: string to be printed between numbers
 * @n: number of integers passed to function
 *
 *	if @separator NULL, do not print.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);

	i = 0;
	while (i < n)
	{
		printf("%d", va_arg(numbers, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(numbers);
}
