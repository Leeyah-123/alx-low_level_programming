#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in an hash table
 * @key: Key to be searched for in the hash_table
 * @size: Size of the hash table array
 *
 * Return: Key index of a key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
