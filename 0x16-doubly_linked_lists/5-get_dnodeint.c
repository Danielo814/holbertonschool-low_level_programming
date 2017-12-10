#include "lists.h"
/**
 * get_dnodeint_at_index - gets value at index
 *
 * @head: head of list
 * @index: index of node to get
 *
 * Return: address of node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *node;

	if (head == NULL)
		return (NULL);
	node = head;
	for (i = 0; i != index; i++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}
	return (node);
}
