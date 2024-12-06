#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node
 *			at given position.
 *
 * @h: head of list.
 * @idx: index of the list where node should be added.
 * @n: value assigned to node:
 *
 * Return: address of new node, or NULL if fails.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h,
		unsigned int idx, int n)
{
	dlistint_t *newNode;
	int indexCount;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	indexCount = 0;
	newNode = *h;

	while (indexCount < idx)
	{
		newNode = newNode->next;
		indexCount = indexCount + 1;

		if (newNode->next == NULL &&
		newNode->prev == NULL)
			return (NULL);

	}

	newNode = newNode->next;
	newNode->n = n;

	return (newNode);
}
