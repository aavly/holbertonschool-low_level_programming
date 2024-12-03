#include "lists.h"

/**
 * dlistint_len - returns number of elements in a list
 * @h: head node of list.
 *
 * Return: number of elements in list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t nodeCount;

	nodeCount = 0;
	if (h == NULL)
		return (nodeCount);

	while (h != NULL)
	{
		nodeCount = nodeCount + 1;
		h = h->next;
	}

	return (nodeCount);
}
