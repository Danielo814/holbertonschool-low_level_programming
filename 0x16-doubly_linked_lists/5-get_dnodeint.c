#include "lists.h"
/**
 * get_dnodeint_at_index - finds the nth node of a linked list
 *
 * @head: pointer to head of list
 * @index: index of node to get
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	for (temp = head; i < index && temp != NULL; i++)
	{
		if (i > index)
			return (NULL);
		temp = temp->next;
	}
	return (temp);
}
