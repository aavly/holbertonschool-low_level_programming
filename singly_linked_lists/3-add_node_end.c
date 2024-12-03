#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 *		list.
 *
 * @head: head of list_t list
 * @str: string to be assigned to new node.
 *
 * Return: return added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *currentNode;
	char *string;
	int length;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	if (str != NULL)
	{
		string = strdup(str);
		newNode->str = string;
	}
	else
	{
		free(newNode);
		return (NULL);
	}

	length = 0;
	while (str[length] != '\0')
		length = length + 1;
	
	newNode->len = length;
	newNode->next = NULL;

	if (*head == NULL)
		*head = newNode;
	else
	{
		currentNode = *head;
		while (currentNode->next != NULL)
			currentNode = currentNode->next;
		currentNode->next = newNode;
	}

	return (newNode);
}
