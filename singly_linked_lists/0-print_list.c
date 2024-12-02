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

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h, h->str);

		h = h->next;
		numberOfNodes = numberOfNodes + 1;
	}
	
	return (numberOfNodes);
}
