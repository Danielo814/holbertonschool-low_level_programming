#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table
 *
 * @ht: pointer to hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	size_t i;
	int flag = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (temp = ht->array[i]; temp; temp = temp->next)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			flag = 1;
		}
	}
	printf("}\n");
}
