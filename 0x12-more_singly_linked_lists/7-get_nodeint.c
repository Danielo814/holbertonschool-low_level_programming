#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - finds node at index
 *
 * @head: head of list
 * @index: index of node
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i != index; i++)
	{
		head = head->next;
		if (!head)
			return (NULL);
	}
	return (head);
}
