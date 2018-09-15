#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all elements of linked list
 * @h: head of list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
