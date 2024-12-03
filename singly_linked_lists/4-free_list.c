#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: head of list_t list
 *
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *nodeToFree;

	if (head == NULL)
		return;

	nodeToFree = head;
	while (nodeToFree != NULL)
	{
		head = nodeToFree->next;
		free(nodeToFree);
		nodeToFree = head;
	}
}
