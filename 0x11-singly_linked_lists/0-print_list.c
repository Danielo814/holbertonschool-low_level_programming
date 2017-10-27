#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all elements of list
 *
 * @h: head of list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
