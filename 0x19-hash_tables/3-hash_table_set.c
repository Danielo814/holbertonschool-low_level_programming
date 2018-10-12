#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: Hash table to add or update key/value to
 * @key: is the key
 * @value: value associated with key
 * Return: 1 if success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *i, *new;
	size_t index;
	char *keycpy, *valcpy;

	if (!key || !value || !ht)
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	keycpy = strdup(key);
	valcpy = strdup(value);
	for (i = ht->array[index]; i != NULL; i = i->next)
	{
		if (strcmp(i->key, key) == 0)
		{
			if (i->value)
				free(i->value);
			i->value = valcpy;
			free(new);
			return (1);
		}
	}
	new->key = keycpy;
	new->value = valcpy;
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
