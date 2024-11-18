#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: the number of elements in array
 * @cmp: pointer to the function to be used to compare
 *	values
 *
 * Return: index of first element for which cmp function
 *	does not return 0.
 *	- if no element matches, return -1
 *	- if size <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
