#include "hash_tables.h"
/**
 * key_index - gives you the index of a key
 *
 * @key: key to get index of
 * @size: size of the array of the hash table
 * Return: index that has key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
