#include "lists.h"
/**
 * free_dlistint - frees a list
 *
 *
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	for (; head; head = head->next)
	{
		i = head;
		free(i);
	}
}
