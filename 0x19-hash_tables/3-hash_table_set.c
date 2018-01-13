#include "hash_tables.h"
/**
 * hash_table_set - adds element to table
 * @ht: hash table
 * @key: key to add to table
 * @value: value of key
 *
 * Return: 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	hash_node_t *temp;
	unsigned long int i;

	if (!ht || !key || !value)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	if (temp)
	{
		for (; temp; temp = temp->next)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				return (1);
			}
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;
	if (ht->array[i])
		new->next = ht->array[i];
	ht->array[i] = new;
	return (1);
}
