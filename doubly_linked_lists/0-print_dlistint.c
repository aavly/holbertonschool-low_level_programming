#include "lists.h"

/**
 * print_dlistint - prints all elements of list.
 * @h: head of list
 *
 * Return: number of nodes in list.
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *traversingNode;
	int nodeCount;

	traversingNode = malloc(sizeof(dlistint_t));
	if (traversingNode == NULL)
		return (0);

	nodeCount = 0;
	traversingNode = h->next;

	while (h != NULL)
	{
		printf("%d", traversingNode->n);
		nodeCount = nodeCount + 1;
		traversingNode = traversingNode->next;
	}

	return (nodeCount);
}
