#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 *
 * @size: size of the array
 * Return: pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	size_t i;

	hash = malloc(sizeof(hash_table_t));
	if (!hash)
	{
		return (NULL);
	}
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!hash->array)
	{
		free(hash);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		hash->array[i] = NULL;
		i++;
	}
	return (hash);
}
