#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head node of linked list
 * @index: nth node to find
 *
 * Return: nth node of a linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i = i + 1;
	}

	return (NULL);
}
