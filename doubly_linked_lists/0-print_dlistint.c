#include "lists.h"

/**
 * print_dlistint - prints all elements of list.
 * @h: head of list
 *
 * Return: number of nodes in list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *traversingNode;
	size_t nodeCount;

	nodeCount = 0;

	if (h == NULL)
		return (nodeCount);

	traversingNode = h;

	while (traversingNode != NULL)
	{
		printf("%d\n", traversingNode->n);
		nodeCount = nodeCount + 1;
		traversingNode = traversingNode->next;
	}

	return (nodeCount);
}
