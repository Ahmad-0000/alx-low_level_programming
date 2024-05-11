#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
#define UPDATED 1
#define NOT_UPDATED 0

/**
 * hash_table_set - is a function to add a key-value pair to @ht
 * @ht: the hash table
 * @key: the key, can't be null
 * @value: the value
 * Return: is to return 1 when success, otherwise, 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int length, i, key_comparison = 1;
	unsigned long index;
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
	node->value = calloc(length + 1, sizeof(char));
	if (!(node->value))
	{
		free(node);
		return (0);
	}
	for (i = 0; i < length; i++)
		node->value[i] = value[i];
	if (ht->array[index])
		key_comparison = strcmp(ht->array[index]->key, key);
	if (!(ht->array[index]))
	{
		ht->array[index]= node;
	}
	else if (!key_comparison)
	{
		node->next = ht->array[index]->next;
		free(ht->array[index]->value);
		free(ht->array[index]);
		ht->array[index] = node;
	}
	else if (key_comparison)
	{
		temp = ht->array[index];
		if (!update_collision(temp, node))
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

int update_collision(hash_node_t *head, hash_node_t *node)
{
	while (head->next != NULL)
	{
		if (!strcmp(head->next->key, node->key))
		{
			node->next = head->next->next;
			head->next = node;
			free(head->value);
			free(head);
			return (UPDATED);
		}
		head = head->next;
	}
	return (NOT_UPDATED);
}
