#include "main.h"

/**
 * leet - encodes a string into 1337.
 *	Letters a and A should be replaced by 4
 *	Letters e and E should be replaced by 3
 *	Letters o and O should be replaced by 0
 *	Letters t and T should be replaced by 7
 *	Letters l and L should be replaced by 1
 *
 * @str: string to be encoded.
 * Return: encoded string in char.
 */

char *leet(char *str)
{
	int indx1 = 0, indx2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[indx1])
	{
		for (indx2 = 0; indx2 <= 7; indx2++)
		{
			if (str[indx1] == leet[indx2] ||
			    str[indx1] - 32 == leet[indx2])
				str[indx1] = indx2 + '0';
		}
		indx1++;
	}
	return (str);
}
