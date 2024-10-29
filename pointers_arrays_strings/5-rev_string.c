#include "main.h"

/**
 * rev_string - reverses a string.
 * @s - string to be reversed.
 */

void rev_string(char *s)
{
	int start = 0;
	int end = 0;
	char placeholder;

	while (s[end] != '\0')
		end++;

	end--;

	while (start < end)
	{
		placeholder = s[start];
		s[start] = s[end];
		s[end] = placeholder;

		start++;
		end--;
	}
}
