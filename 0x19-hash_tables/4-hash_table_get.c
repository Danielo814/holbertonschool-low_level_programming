#include "hash_tables.h"
/**
 * hash_table_get - retreives hash value
 * @ht: Hash table
 * @key: key
 *
 * Return: Value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (!ht || !key)
		return (NULL);

	i = key_index((unsigned char *)key, ht->size);
	node = ht->array[i];

	if (!node)
		return (NULL);
	for (; strcmp(node->key, key) != 0; node = node->next)
		;
	if (!node)
		return (NULL);
	return (node->value);
}
