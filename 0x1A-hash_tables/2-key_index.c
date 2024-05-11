#include "hash_tables.h"

/**
 * key_index - is a function to map a "key" to an "index"
 * @key: a string key
 * @size: the size of the hash table array
 * Return: is to return the index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	return (index %= size);
}
