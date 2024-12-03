#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at end of list.
 * @head: pointer to head node.
 * @n: value associate with node
 *
 * Return: address of new element || NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *currentNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	if (*head == NULL)
		*head = newNode;
	else
	{
		currentNode = (*head);

		while (currentNode->next != NULL)
			currentNode = currentNode->next;

		currentNode->next = newNode;
		newNode->prev = currentNode;
	}
	newNode->next = NULL;

	return (newNode);
}
