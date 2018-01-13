#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 *
 * @size: size of table
 *
 * Return: pointer to table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ptr;

	if (!size)
		return (NULL);

	ptr = malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);
	ptr->size = size;
	ptr->array = malloc(size * sizeof(hash_node_t *));
	if (!ptr->array)
	{
		free(ptr);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		ptr->array[i] = NULL;
		i++;
	}
	return (ptr);
}
