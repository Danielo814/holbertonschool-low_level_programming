#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees list and sets first element to NULL
 *
 * @head: head of list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *a, *b;

	if (head == NULL || *head == NULL)
		return;
	a = *head;
	while (a)
	{
		b = a;
		a = a->next;
		free(b);
	}
	*head = NULL;
}
