#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by \n
 * @separator: string to be printed between strings
 * @n: number of strings passed to function
 *
 *	- if @separator NULL, do not print.
 *	- if any string NULL, print (nil) instead.
 *	- print newline at end of function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *strrr;
	unsigned int i;
	va_list strings;

	va_start(strings, n);

	i = 0;

	while (i < n)
	{
		strrr = va_arg(strings, char *);

		if (strrr == NULL)
			printf("(nil)");
		else
			printf("%s", strrr);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);

		i++;
	}

	printf("\n");
	va_end(strings);
}
