#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
#define FOUND 1
#define NOT_FOUND 0

/**
 * hash_table_set - is a function to add a key-value pair to @ht
 * @ht: the hash table
 * @key: the key, can't be null
 * @value: the value
 * Return: is to return 1 when success, otherwise, 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int length, i, key_comparison = 1, found = NOT_FOUND;
	unsigned long index;
	char *duplicated_value;
	hash_node_t *node, *temp;

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
	if (ht->array[index])
		key_comparison = strcmp(ht->array[index]->key, key);
	if (!(ht->array[index]) || (ht->array[index] && key_comparison))
	{
		ht->array[index] = node;
	}
	else
	{
		temp = ht->array[index];
		found = collision_update(temp, node);
		if (!found)
		{
			node->next = ht->array[index]->next;
			ht->array[index]->next = node;
		}
	}
	return (1);
}

/**
 * collision_update - is a function to update a collided node
 * @head: is the first node in the list
 * @node: is the node new node
 * Return: is to return 1 when success, otherwise, 0
 */

int collision_update(hash_node_t *head, hash_node_t *node)
{
	while (head->next != NULL)
	{
		if (!strcmp(head->next->key, node->key))
		{
			node = head->next->next;
			head->next = node;
			return (FOUND);
		}
		head = head->next;
	}
	return (NOT_FOUND);
}
