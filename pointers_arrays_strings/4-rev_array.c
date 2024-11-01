#include "main.h"

/**
 * reverse_array - reverses content of an array of ints.
 * @a: array to be reversed.
 * @n: number of elements in array.
 */

void reverse_array(int *a, int n)
{
	int placeholder;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		placeholder = a[start];
		a[start] = a[end];
		a[end] = placeholder;

		start++;
		end--;
	}
}
