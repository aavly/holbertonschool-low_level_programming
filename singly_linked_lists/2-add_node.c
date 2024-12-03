#include "lists.h"

/**
 * add_node - adds a node at the beginning of
 *		a list_t list
 *
 * @head: head of list
 * @str: string contained by node
 *
 * Return: return added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	char *string;
	int length;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	if (str != NULL)
		string = strdup(str);
	else
	{
		free(newNode);
		return (NULL);
	}

	length = 0;

	while (str[length] != '\0')
		length = length + 1;

	newNode->str = string;
	newNode->len = length;
	newNode->next = *head;

	return (newNode);
}
