#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated witha  key
 *
 * @ht: hash table you want to look into
 * @key: key to search for
 * Return: value associated with element, or NULL if key doesnt exist
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	size_t i;

	if (!ht || !key)
		return (NULL);
	i = key_index((const unsigned char *) key, ht->size);
	for (temp = ht->array[i]; temp; temp = temp->next)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
	}
	return (NULL);
}
