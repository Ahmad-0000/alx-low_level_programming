#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - a function to retireve a value associated with @key in @ht
 * @ht: a hash table
 * @key: a key
 * Return: is to return a pointer to a value or NULL if no value
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (!(ht->array[index]))
		return NULL;
	if (!strcmp(ht->array[index]->key, key))
		return (ht->array[index]->value);
	temp = ht->array[index]->next;
	while (temp != NULL)
	{
		if (!strcmp(temp->key, key))
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
