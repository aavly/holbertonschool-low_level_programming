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
	int i = 0;

	va_list printList; /* declaring va variable printList*/
	va_start(printList, format); /* intializing printList with last fixed argument being format */

	s = va_arg(printList, char *);

	while (format) && (format[i]) /* if format and format[i] are valid */
	{
		

	}

}