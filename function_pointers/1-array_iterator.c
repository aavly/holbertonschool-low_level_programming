#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 *		parameter on each element of an array.
 *
 * @array: pointer to array of integers
 * @size: size of array
 * @action: pointer to the function required to use.
 */

void array_iterator(int  *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		while (size--)
		{
			action(*array);
			array++;
		}
	}
}
