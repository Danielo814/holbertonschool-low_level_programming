#include "lists.h"
/**
 * sum_dlistint - returns sum of nodes
 *
 * @head: head of list
 *
 * Return: number of nodes in list
 */
int sum_dlistint(dlistint_t *head)
{
	int a;

	for (a = 0; head; head = head->next)
		a += head->n;
	return (a);
}
