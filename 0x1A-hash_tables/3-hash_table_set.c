#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
#define UPDATED 1
#define NOT_UPDATED 0
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
	int key_comparison = 1;
	unsigned long index;
	hash_node_t *new_node;

	if (!ht || !key || !key[0] || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!(new_node->key))
	{
		free(new_node);
		return (0);
	}
	new_node->next = NULL;
	new_node->value = strdup(value);
	if (!(new_node->value))
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	if (ht->array[index])
		key_comparison = strcmp(ht->array[index]->key, key);
	insert_node(ht, new_node, index, key_comparison);
	return (1);
}

/**
 * insert_node - a specific-case function to insert @node in the @ht
 * @ht: is a hash table
 * @node: is a node to be inserted in @ht
 * @i: is the index in which @node must be inserted
 * @cmp: the result of comparision between the node key and the index node key
 */

void insert_node(hash_table_t *ht, hash_node_t *node, unsigned long i, int cmp)
{
	hash_node_t *head;

	if (!(ht->array[i]))
	{
		ht->array[i] = node;
	}
	else if (!cmp) /* the key are matched */
	{
		if (!strcmp(node->value, ht->array[i]->value))
		{
			free(node->value);
			free(node);
			return;
		}
		node->next = ht->array[i]->next;
		free(ht->array[i]->value);
		free(ht->array[i]);
		ht->array[i] = node;
	}
	else if (cmp) /* the key are not matched "collision" */
	{
		head = ht->array[i];
		if (!update_collision(head, node))
		{
			node->next = ht->array[i];
			ht->array[i] = node;
		}
	}
}

/**
 * update_collision - is a function to update a collided node
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
			if (!strcmp(node->value, head->next->value))
			{
				free(node->value);
				free(node);
				return (UPDATED);
			}
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

int check_collision(hash_node_t *second, const char *value)
{
	while (second)
	{
		if (!strcmp(second->value, value))
			return (FOUND);
		second = second->next;
	}
	return (NOT_FOUND);
}
