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
	char *string;


	string = strdup(str);

	newNode->str = str;

	return (newNode);
}
