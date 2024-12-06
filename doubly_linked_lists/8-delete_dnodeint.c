#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index.
 * @head: pointer to a pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 if successful, -1 if fails
 */

int delete_dnodeint_at_idnex(dlistint_t **head,
		unsigned int index)
{
	dlistint_t *current;
	unsigned int indexCount;

	current = *head;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current && indexCount < index)
	{
		current = current->next;
		indexCount = indexCount + 1;
	}

	if (current->prev)
		current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;

	free(current);
	return (1);

}
