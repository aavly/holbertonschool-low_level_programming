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

	if (head == NULL)
		return (NULL);

	i = 0;

	while (i < index)
	{
		while (head != NULL)
		{
			head = head->next;
			i = i + 1;
		}
		if (i != index - 1)
			return (NULL);
	}
	return (head);
}
