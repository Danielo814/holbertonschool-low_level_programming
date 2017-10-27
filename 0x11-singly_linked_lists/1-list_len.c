#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - returns the count of elements
 *
 * @h: head of linked list
 *
 * Return: count
 */
size_t list_len(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
