#include "hash_tables.h"
/**
 * hash_table_delete - delete hash table
 *
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *prev;
	unsigned long int size;
	unsigned long int i;

	if (!ht)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}
	for (i = 0, size = ht->size; i < size; i++)
	{
		temp = ht->array[i];
		while (temp)
		{
			prev = temp;
			temp = temp->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
