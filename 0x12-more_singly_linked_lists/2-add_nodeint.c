#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - adds node to beginning of list
 * @head: head of list
 * @n: number to add
 *
 * Return: address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (*head);
}
