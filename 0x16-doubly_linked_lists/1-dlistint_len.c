#include "lists.h"
/**
 * dlistint_len - returns number of elements in linked list
 *
 * @h: pointer to list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (; h && h->prev; h = h->prev)
		;
	for (i = 0; h; i++)
		h = h->next;
	return (i);
}
