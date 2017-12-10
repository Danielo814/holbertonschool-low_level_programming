#include "lists.h"
/**
 * add_dnodeint_end - adds node at end of list
 * @head: head of list
 * @n: value
 *
 * Return: address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	current = *head;
	new->n = n;
	new->prev = current;
	new->next = NULL;
	if (*head)
	{
		for (; current->next; current = current->next)
			;
	}
	else
		return (*head = new);
	new->prev = current;
	current->next = new;
	return (new);
}
