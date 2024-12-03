#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of linked list.
 * @head: pointer to head node.
 * @n: value associate with node
 *
 * Return: address of new element || NULL if failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	newNode->prev = NULL;
	*head = newNode;

	return (newNode);
}
