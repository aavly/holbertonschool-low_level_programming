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

	while (head != NULL)
	{
		nodeToFree = head;
		head = head->next;
		free (nodeToFree);
	}
}
