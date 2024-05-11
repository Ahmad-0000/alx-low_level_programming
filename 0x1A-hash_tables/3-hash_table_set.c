#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - is a function to add a key-value pair to @ht
 * @ht: the hash table
 * @key: the key, can't be null
 * @value: the value
 * Return: is to return 1 when success, otherwise, 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int length;
	int i;
	unsigned long index;
	char *duplicated_value;
	hash_node_t *node;

	if (!ht || !key)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = malloc(sizeof(*node));
	if (!node)
		return (0);
	node->key = (char *)key;
	length = strlen(value);
	node->next = NULL;
	duplicated_value = calloc(length + 1, sizeof(char));
	if (!duplicated_value)
		return (0);
	for (i = 0; i < length; i++)
		duplicated_value[i] = value[i];
	node->value = duplicated_value;
	if (!(ht->array[index]))
	{
		ht->array[index] = node;
	}
	else if (ht->array[index] && ht->array[index]->key == key)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index]->next;
		ht->array[index]->next = node;
	}
	return (1);
}
