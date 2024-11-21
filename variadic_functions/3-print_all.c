#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything.
 * @format: list of types of arguments passed
 *		to function.
 *
 *	- if string NULL, print (nil) instead
 *	- any other char should be ignored
 */

void print_all(const char * const format, ...)
{
	char *strrr, *separator = "";
	int i;
	va_list toPrint;

	va_start(toPrint, format);

	i = 0;

	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' ||
		format[i] == 'f' || format[i] == 's')
		{
			printf("%s", separator);
			switch (format[i])
			{
				case ('c'):
					printf("%c", va_arg(toPrint, int));
					break;
				case ('i'):
					printf("%d", va_arg(toPrint, int));
					break;
				case ('f'):
					printf("%f", va_arg(toPrint, double));
					break;
				case ('s'):
					strrr = va_arg(toPrint, char *);
					if (!strrr)
						strrr = "(nil)";
					printf("%s", strrr);
					break;
			}
			separator = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(toPrint);
}
