#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts new node at position
 * @head: start of list
 * @idx: index to add node to
 * @n: value to assign
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *b;
	unsigned int i;

	if (!head)
		return (NULL);
	i = 0;
	a = *head;
	if (!a && idx != 0)
		return (NULL);
	b = malloc(sizeof(listint_t));
	if (b == NULL)
		return (NULL);
	b->n = n;
	if (idx == 0)
	{
		b->next = *head;
		*head = b;
		return (b);
	}
	for (; i != idx - 1; i++)
	{
		a = a->next;
		if (!a)
		{
			free(b);
			return (NULL);
		}
	}
	b->next = a->next;
	a->next = b;
	return (b);
}
