#include "lists.h"

/**
 * list_len - returns number of elements in a linked_t
 *		list.
 * @h: head node
 *
 * Return: number of elements 
 */

size_t list_len(const list_t *h)
{
	size_t numberOfElements = 0;

	while (h)
	{
		numberOfElements = numberOfElements + 1;
		h = h->next;
	}

	return (numberOfElements);
}
