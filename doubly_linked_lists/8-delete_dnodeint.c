#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given index.
 * @head: pointer to a pointer to head of list
 * @index: index of node to delete
 *
 * Return: 1 if successful, -1 if fails
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL, *delete = NULL;

	if (!head || !(*head))
		return (-1);
	temp = *head;
	while (temp != NULL)
	{
		if (count != index)
			temp = temp->next, count++;
		else
		{
			if (index == 0 && (*head)->next == NULL)
				*head = NULL, free(temp);
			else if (index == 0 && (*head)->next != NULL)
			{
				delete = *head, *head = (*head)->next;
				delete->next = NULL, (*head)->prev = NULL;
				free(delete);
			}
			else if (temp->next == NULL)
			{
				delete = temp, temp = temp->prev;
				delete->prev = NULL;
				temp->next = NULL;
				free(delete);
			}
			else
			{
				delete = temp, temp = temp->prev;
				temp->next = temp->next->next;
				temp->next->prev = temp;
				delete->prev = NULL, delete->next = NULL, free(delete);
			}
			return (1);
		}
	}
	return (-1);
}
