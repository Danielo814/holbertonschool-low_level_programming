#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *
 * @list: pointer to list
 *
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *tempN;

	node = *list;
	if (list == NULL)
		return;
	for (node = node->next; node; node = node->next)
	{
		while (node->prev && node->n < node->prev->n)
		{
			tempN = node;
			if (node->next)
				node->next->prev = tempN->prev;
			node->prev->next = tempN->next;
			node = node->prev;
			tempN->prev = node->prev;
			tempN->next = node;
			if (node->prev)
				node->prev->next = tempN;
			node->prev = tempN;
			if (!tempN->prev)
				*list = tempN;
			print_list(*list);
			node = node->prev;
		}
	}
}
