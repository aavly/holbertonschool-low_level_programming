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
	dlistint_t *newNode, *current;
	int indexCount;

	if (indexCount == 0)

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;

		if (*h != NULL)
			(*h)->prev = newNode;

		*h = newNode;
		return (newNode);
	}

	current = *h;
	while (current != NULL && indexCount < idx - 1)
	{
		current->next;
		indexCount = indexCount + 1;
	}

	if (current == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = current->next;
	newNode->prev = current;

	if (current->next != NULL)
		current->next->prev = newNode;
	current->next = newNode;

	return (newNode);
}
