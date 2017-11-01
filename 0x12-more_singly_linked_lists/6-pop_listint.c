#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - delete first item of linked list
 *
 * @head: head of list
 *
 * Return: value
 */
int pop_listint(listint_t **head)
{
	listint_t *a;
	int i;

	a = *head;
	if (a)
		return (0);
	i = a->n;
	*head = a->next;
	free(a);
	return (i);
}
