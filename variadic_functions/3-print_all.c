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
	char *strrr;
	int i;
	va_list toPrint;

	va_start(toPrint, format);

	i = 0;

	while (format && format[i] != '\0')
	{
		if (i > 0)
			printf(", ");

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
				if (strrr == NULL)
					printf("(nil)");
				else
					printf("%s", strrr);
				break;
			default:
				break;
		}
		i++;
	}
     
	printf("\n");
	va_end(toPrint);
}
