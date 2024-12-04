#include "lists.h"

/**
 * sum_dlistint - sums all data (n) of linked list
 * @head: head node of linked list
 *
 * Return: returns the sum of all data (n) contained.
 */

int sum_dlistint(dlistint_t *head)
{
	int nSum;

	/**
	 * traverse thru list
	 * iterate and count nSum
	 * return nSum
	 */

	nSum = 0;

	while (head != NULL)
	{
		nSum = nSum + head->n;
		head = head->next;
	}

	return (nSum);
}
