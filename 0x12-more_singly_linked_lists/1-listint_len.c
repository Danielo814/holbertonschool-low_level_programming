#include "lists.h"
/**
 * listint_len - returns number of elements in a linked list
 *
 * @h: head of list
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
