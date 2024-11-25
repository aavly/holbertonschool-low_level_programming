#include "main.h"

/**
 * _printf - function to process the argument based format
 *
 * @format : char array indicating the format of the argument
 * Return: integer value of the total of char in argument
 */

int _printf(const char *format, ...)
{
	int count; /* no. of characters to be return */
	int loop_count; /* counter for while loop */
	int length; /* length of string char *s */
	char *s;
	int i = 0; /*counter for *format */

	va_list printList; /* declaring va variable printList*/
	va_start(printList, format); /* intializing printList with last fixed argument being format */

	s = va_arg(printList, char *);

	while (format) && (format[i]) /* if format and format[i] are valid */
	{	
		if (format[i] == '%' && format[i+1] != NULL ) /* % operand found and format[i+1] is not NULL*/
		{ 	
			i = 1;  /* increment i */

			if (format[i] == 'c' || format[i] == 's') /* if 'c' or 's' found in format[i] */
			{
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

}
