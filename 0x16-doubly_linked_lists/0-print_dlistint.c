#include "lists.h"
/**
 * print_dlistint - prints elements of list
 *
 * @h: pointer to list
 * Return: pointer
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (; h && h->prev; h = h->prev)
		;
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
