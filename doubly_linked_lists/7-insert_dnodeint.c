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

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp = NULL;
	dlistint_t *new = NULL;

	temp = *h;
	while (temp != NULL)
	{
		if (count != idx)
			temp = temp->next, count++;
		else
		{
			if (count == 0)
				new = add_dnodeint(h, n);
			else
			{
				new = malloc(sizeof(dlistint_t));
				if (new == NULL)
					return (NULL);
				new->n = n;

				new->next = temp;
				new->prev = temp->prev;
				temp->prev = new;
				temp = new->prev;
				temp->next = new;
			}
			return (new);
		}
	}
	if (idx == count)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	return (NULL);

}
