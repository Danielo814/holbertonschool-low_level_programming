#include "hash_tables.h"
/**
 * hash_table_print -  prints pairs from a hash table
 *
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i;
	int sw;

	if (!ht)
		return;

	printf("{");
	sw = 0;
	i = 0;
	while (i < ht->size)
	{
		temp = ht->array[i];
		if (temp)
		{
			if (sw == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			while ((temp = temp->next) != NULL)
			{
				printf(", ");
				printf("'%s: '%s'", temp->key, temp->value);
			}
			sw = 1;
		}
		i++;
	}
	printf("}\n");
}
