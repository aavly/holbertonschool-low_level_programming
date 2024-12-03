#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: pointer to head node.
 *
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *nodeToFree;

	while (head != NULL)
	{
		nodeToFree = head;
		head = head->next;

		free(nodeToFree);
	}
}
