#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head node
 *
 * Return: number of nodes
 *		otherwise [0] (nil) if str is NULL.
 */

size_t print_list(const list_t *h)
{
	size_t numberOfNodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		numberOfNodes = numberOfNodes + 1;
		h = h->next;
	}

	return (numberOfNodes);
}
