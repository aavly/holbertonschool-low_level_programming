#include "main.h"

/**
 * string_toupper - converts all lowercase to upper.
 * @str: array of char (string) to be checked.
 *
 * Return: converted string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}
