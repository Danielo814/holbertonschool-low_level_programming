#include "lists.h"
/**
 * add_dnodeint - adds node to beginning of list
 * @head: head of list
 * @n: value
 * Return: head of list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head)
	{
		for (; (*head)->prev; *head = (*head)->prev)
			;
		(*head)->prev = new;
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
