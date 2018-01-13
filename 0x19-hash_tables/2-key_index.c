#include "hash_tables.h"
/**
 * key_index - convert hash key to index
 *
 * @key: key
 * @size: size of hash table
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int i;

	i = hash_djb2(key) % size;
	return (i);
}
